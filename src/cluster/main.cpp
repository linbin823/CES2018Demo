#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "backenddata.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    BackendData data;
    //safe relate telltale here?

    engine.rootContext()->setContextProperty("cpp_backendData", QVariant::fromValue(&data));
    engine.load(QUrl(QStringLiteral("qrc:/qml/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
