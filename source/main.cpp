#include "mainWindow.h"
#include "DataBaseManager.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.showFullScreen();

    DataBaseManager db;
    db.connect();

    return a.exec();
}
