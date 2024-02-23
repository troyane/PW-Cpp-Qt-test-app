#include <QCoreApplication>
#include <QDebug>
#include <QIODevice>
#include <QSysInfo>

int main(int argc, char* argv[]) {

    QCoreApplication a(argc, argv);
    QTextStream(stdout) << "- - -" << Qt::endl;
    QTextStream(stdout) << "buildAbi: " << QSysInfo::buildAbi() << Qt::endl;
    QTextStream(stdout) << "buildCpuArchitecture: "
                        << QSysInfo::buildCpuArchitecture() << Qt::endl;
    QTextStream(stdout) << "currentCpuArchitecture: "
                        << QSysInfo::currentCpuArchitecture() << Qt::endl;
    QTextStream(stdout) << "kernelType: " << QSysInfo::kernelType() << Qt::endl;
    QTextStream(stdout) << "kernelVersion: " << QSysInfo::kernelVersion()
                        << Qt::endl;
    QTextStream(stdout) << "machineHostName: " << QSysInfo::machineHostName()
                        << Qt::endl;
    QTextStream(stdout) << "machineUniqueId: " << QSysInfo::machineUniqueId()
                        << Qt::endl;
    QTextStream(stdout) << "- - -" << Qt::endl;

    return 0;
}
