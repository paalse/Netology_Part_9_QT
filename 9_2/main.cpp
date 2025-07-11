#include <QCoreApplication>
#include <QSqlDatabase>
#include <QTcpServer>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::database("sales");

    QTcpServer server;

    return a.exec();
}
