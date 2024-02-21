#include <QCoreApplication>
#include <QDebug>

int main(int argc, char * argv [])          {
    QCoreApplication a(argc, argv);
    qDebug() << "Hi there! What about linter?";

    return a.exec();
}
