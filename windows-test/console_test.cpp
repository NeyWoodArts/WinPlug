#include <QCoreApplication>
#include <QDebug>
#include <QString>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    qDebug() << "Qt6 is working on Windows!";
    qDebug() << "Qt version:" << QT_VERSION_STR;

    QString testString = "Plug for Fender Mustang Amps - Windows Test";
    qDebug() << "Test string:" << testString;

    return 0; // Exit immediately
}