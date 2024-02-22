#include <QCoreApplication>
#include <QDebug>
#include <QSysInfo>

int main(int argc, char* argv[]) {

    QCoreApplication a(argc, argv);
    qInfo() << "- - -";
    qInfo() << "Hello from Qt console application!";
    qInfo() << "buildAbi:" << QSysInfo::buildAbi();
    qInfo() << "buildCpuArchitecture:" << QSysInfo::buildCpuArchitecture();
    qInfo() << "currentCpuArchitecture:" << QSysInfo::currentCpuArchitecture();
    qInfo() << "kernelType:" << QSysInfo::kernelType();
    qInfo() << "kernelVersion:" << QSysInfo::kernelVersion();
    qInfo() << "machineHostName:" << QSysInfo::machineHostName();
    qInfo() << "machineUniqueId:" << QSysInfo::machineUniqueId();
    qInfo() << "- - -";

    return 0;
}
