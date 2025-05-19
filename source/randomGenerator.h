#ifndef RANDOMGENERATOR_H
#define RANDOMGENERATOR_H

#include <QDialog>
#include <QPushButton>
#include <QDialogButtonBox>
#include <QLabel>
#include <QLineEdit>

namespace Ui {
class randomGenerator;
}

class randomGenerator : public QDialog {
    Q_OBJECT

public:
    explicit randomGenerator(QWidget *parent = nullptr);
    ~randomGenerator();

    int getMetersN() const;
    int getBuildingsN() const;

private slots:
    void on_okCancel_accepted();     // When OK clicked
    void on_okCancel_rejected();     // When Cancel clicked
    void on_maxNum_clicked();        // When "Max Num" clicked

private:
    Ui::randomGenerator *ui;
};

#endif // RANDOMGENERATOR_H
