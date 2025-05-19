#include "randomGenerator.h"
#include "ui_randomGenerator.h"

#include <QScreen>
#include <QGuiApplication>
#include <QIntValidator>

randomGenerator::randomGenerator(QWidget *parent)
    : QDialog(parent), ui(new Ui::randomGenerator)
{
    ui->setupUi(this);

    // Disable window movement and make it modal
    setWindowFlag(Qt::Dialog);
    setWindowModality(Qt::ApplicationModal);
    setWindowFlags(windowFlags() | Qt::MSWindowsFixedSizeDialogHint);
    setWindowFlag(Qt::WindowStaysOnTopHint);
    // setWindowFlag(Qt::FramelessWindowHint);

    // Optional: Translucent background
    // setAttribute(Qt::WA_TranslucentBackground);

    // Center the dialog on screen
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->availableGeometry();
    move(screenGeometry.center() - rect().center());

    // Set up input validation (only positive integers, max 1000000)
    QIntValidator *validator = new QIntValidator(1, 1000000, this);
    ui->metersN->setValidator(validator);

    // Connect buttons
    connect(ui->okCancel, &QDialogButtonBox::accepted, this, &randomGenerator::on_okCancel_accepted);
    connect(ui->okCancel, &QDialogButtonBox::rejected, this, &randomGenerator::on_okCancel_rejected);
    connect(ui->maxNum, &QPushButton::clicked, this, &randomGenerator::on_maxNum_clicked);
}

randomGenerator::~randomGenerator()
{
    delete ui;
}

int randomGenerator::getMetersN() const
{
    return ui->metersN->text().toInt();
}

int randomGenerator::getBuildingsN() const
{
    return ui->buildingsN->text().toInt();
}

void randomGenerator::on_okCancel_accepted()
{
    if (ui->metersN->text().isEmpty()) {
        // Optional: alert user or block OK
        return;
    }
    accept();  // Close with Accepted result
}

void randomGenerator::on_okCancel_rejected()
{
    reject();  // Close with Rejected result
}

void randomGenerator::on_maxNum_clicked()
{
    QString maxim = "99999";
    ui->metersN->setText("maxim");
    ui->buildingsN->setText("maxim");
}
