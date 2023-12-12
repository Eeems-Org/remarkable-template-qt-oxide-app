/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -p application_interface.h: ../../../../interfaces/application.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef APPLICATION_INTERFACE_H
#define APPLICATION_INTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface codes.eeems.oxide1.Application
 */
class CodesEeemsOxide1ApplicationInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "codes.eeems.oxide1.Application"; }

public:
    CodesEeemsOxide1ApplicationInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~CodesEeemsOxide1ApplicationInterface();

    Q_PROPERTY(bool autoStart READ autoStart WRITE setAutoStart)
    inline bool autoStart() const
    { return qvariant_cast< bool >(property("autoStart")); }
    inline void setAutoStart(bool value)
    { setProperty("autoStart", QVariant::fromValue(value)); }

    Q_PROPERTY(QString bin READ bin)
    inline QString bin() const
    { return qvariant_cast< QString >(property("bin")); }

    Q_PROPERTY(bool chroot READ chroot)
    inline bool chroot() const
    { return qvariant_cast< bool >(property("chroot")); }

    Q_PROPERTY(QString description READ description)
    inline QString description() const
    { return qvariant_cast< QString >(property("description")); }

    Q_PROPERTY(QStringList directories READ directories WRITE setDirectories)
    inline QStringList directories() const
    { return qvariant_cast< QStringList >(property("directories")); }
    inline void setDirectories(const QStringList &value)
    { setProperty("directories", QVariant::fromValue(value)); }

    Q_PROPERTY(QString displayName READ displayName WRITE setDisplayName)
    inline QString displayName() const
    { return qvariant_cast< QString >(property("displayName")); }
    inline void setDisplayName(const QString &value)
    { setProperty("displayName", QVariant::fromValue(value)); }

    Q_PROPERTY(QVariantMap environment READ environment)
    inline QVariantMap environment() const
    { return qvariant_cast< QVariantMap >(property("environment")); }

    Q_PROPERTY(QString group READ group)
    inline QString group() const
    { return qvariant_cast< QString >(property("group")); }

    Q_PROPERTY(bool hidden READ hidden)
    inline bool hidden() const
    { return qvariant_cast< bool >(property("hidden")); }

    Q_PROPERTY(QString icon READ icon WRITE setIcon)
    inline QString icon() const
    { return qvariant_cast< QString >(property("icon")); }
    inline void setIcon(const QString &value)
    { setProperty("icon", QVariant::fromValue(value)); }

    Q_PROPERTY(QString name READ name)
    inline QString name() const
    { return qvariant_cast< QString >(property("name")); }

    Q_PROPERTY(QString onPause READ onPause WRITE setOnPause)
    inline QString onPause() const
    { return qvariant_cast< QString >(property("onPause")); }
    inline void setOnPause(const QString &value)
    { setProperty("onPause", QVariant::fromValue(value)); }

    Q_PROPERTY(QString onResume READ onResume WRITE setOnResume)
    inline QString onResume() const
    { return qvariant_cast< QString >(property("onResume")); }
    inline void setOnResume(const QString &value)
    { setProperty("onResume", QVariant::fromValue(value)); }

    Q_PROPERTY(QString onStop READ onStop WRITE setOnStop)
    inline QString onStop() const
    { return qvariant_cast< QString >(property("onStop")); }
    inline void setOnStop(const QString &value)
    { setProperty("onStop", QVariant::fromValue(value)); }

    Q_PROPERTY(QStringList permissions READ permissions WRITE setPermissions)
    inline QStringList permissions() const
    { return qvariant_cast< QStringList >(property("permissions")); }
    inline void setPermissions(const QStringList &value)
    { setProperty("permissions", QVariant::fromValue(value)); }

    Q_PROPERTY(int processId READ processId)
    inline int processId() const
    { return qvariant_cast< int >(property("processId")); }

    Q_PROPERTY(QByteArray screenCapture READ screenCapture)
    inline QByteArray screenCapture() const
    { return qvariant_cast< QByteArray >(property("screenCapture")); }

    Q_PROPERTY(QString splash READ splash WRITE setSplash)
    inline QString splash() const
    { return qvariant_cast< QString >(property("splash")); }
    inline void setSplash(const QString &value)
    { setProperty("splash", QVariant::fromValue(value)); }

    Q_PROPERTY(int state READ state)
    inline int state() const
    { return qvariant_cast< int >(property("state")); }

    Q_PROPERTY(bool systemApp READ systemApp)
    inline bool systemApp() const
    { return qvariant_cast< bool >(property("systemApp")); }

    Q_PROPERTY(bool transient READ transient)
    inline bool transient() const
    { return qvariant_cast< bool >(property("transient")); }

    Q_PROPERTY(int type READ type)
    inline int type() const
    { return qvariant_cast< int >(property("type")); }

    Q_PROPERTY(QString user READ user)
    inline QString user() const
    { return qvariant_cast< QString >(property("user")); }

    Q_PROPERTY(QString workingDirectory READ workingDirectory WRITE setWorkingDirectory)
    inline QString workingDirectory() const
    { return qvariant_cast< QString >(property("workingDirectory")); }
    inline void setWorkingDirectory(const QString &value)
    { setProperty("workingDirectory", QVariant::fromValue(value)); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> launch()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("launch"), argumentList);
    }

    inline QDBusPendingReply<> pause()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("pause"), argumentList);
    }

    inline QDBusPendingReply<> pause(bool startIfNone)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(startIfNone);
        return asyncCallWithArgumentList(QStringLiteral("pause"), argumentList);
    }

    inline QDBusPendingReply<> resume()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("resume"), argumentList);
    }

    inline QDBusPendingReply<> setEnvironment(const QVariantMap &environment)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(environment);
        return asyncCallWithArgumentList(QStringLiteral("setEnvironment"), argumentList);
    }

    inline QDBusPendingReply<> sigUsr1()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("sigUsr1"), argumentList);
    }

    inline QDBusPendingReply<> sigUsr2()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("sigUsr2"), argumentList);
    }

    inline QDBusPendingReply<> stop()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("stop"), argumentList);
    }

    inline QDBusPendingReply<> unregister()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("unregister"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void autoStartChanged(bool in0);
    void directoriesChanged(const QStringList &in0);
    void displayNameChanged(const QString &in0);
    void environmentChanged(const QVariantMap &in0);
    void exited(int in0);
    void iconChanged(const QString &in0);
    void launched();
    void onPauseChanged(const QString &in0);
    void onResumeChanged(const QString &in0);
    void onStopChanged(const QString &in0);
    void paused();
    void permissionsChanged(const QStringList &in0);
    void resumed();
    void splashChanged(const QString &in0);
    void unregistered();
    void workingDirectoryChanged(const QString &in0);
};

namespace codes {
  namespace eeems {
    namespace oxide1 {
      typedef ::CodesEeemsOxide1ApplicationInterface Application;
    }
  }
}
#endif
