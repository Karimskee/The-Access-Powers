#include "mainWindow.h"
#include "ui_mainWindow.h"
#include "DatabaseManager.h"
#include "randomGenerator.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_exit_clicked()
{
    QApplication::quit();
}


void MainWindow::on_minimize_clicked()
{
    this -> showMinimized();
}


void MainWindow::on_random_clicked()
{
    randomGenerator dialog(this);
    if (dialog.exec() == QDialog::Accepted)
    {
        int metersCount = dialog.getMetersN();
        int buildingsCount = dialog.getBuildingsN();

        // Generate random values and insert
        if (generator(metersCount, buildingsCount))
        {
            qDebug() << "[SUCCESS] Generated" << metersCount << "meters.";
            qDebug() << "[SUCCESS] Generated" << buildingsCount << "buildings.";
        }
    }
}


void MainWindow::on_reset_clicked()
{
    DataBaseManager db;
    db.connect();

    if (!db.reset())
    {
        qDebug() << "[ERROR] Failed to clear DB.";
    }
}

