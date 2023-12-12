#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtPlugin>
#include <QtQuick>

#include <cstdlib>
#include <signal.h>

#include <liboxide.h>
#include <liboxide/eventfilter.h>

#include "controller.h"

// This is required for Qt to display to the reMarkable's display
Q_IMPORT_PLUGIN(QsgEpaperPlugin)

using namespace std;

void sigHandler(int signal){
    ::signal(signal, SIG_DFL);
    qApp->quit();
}

int main(int argc, char *argv[]){
    deviceSettings.setupQtEnvironment();
    QGuiApplication app(argc, argv);
    app.setApplicationName("myapp");
    app.setApplicationDisplayName("My Application");
    app.setApplicationVersion(APP_VERSION);
    auto filter = new Oxide::EventFilter(&app);
    app.installEventFilter(filter);
    Controller controller(&app);
    QQmlApplicationEngine engine;
    QQmlContext* context = engine.rootContext();
    // Expose screenGeometry and controller to QML
    context->setContextProperty("screenGeometry", app.primaryScreen()->geometry());
    context->setContextProperty("controller", &controller);
    // Load main.qml from the embedded Qt resource file.
    // This is defined in qml.qrc
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty()){
        qDebug() << "Nothing to display";
        return -1;
    }
    auto root = engine.rootObjects().first();
    controller.setRoot(root);
    filter->root = (QQuickItem*)root;

    // Setup some signal handlers to make sure to quit the application normally if these signals are recieved
    signal(SIGINT, sigHandler);
    signal(SIGSEGV, sigHandler);
    signal(SIGTERM, sigHandler);

    return app.exec();
}
