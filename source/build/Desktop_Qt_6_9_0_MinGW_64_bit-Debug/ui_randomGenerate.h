/********************************************************************************
** Form generated from reading UI file 'randomGenerate.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANDOMGENERATE_H
#define UI_RANDOMGENERATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *okCancel;
    QLabel *dataNumLabel;
    QLineEdit *dataNum;
    QPushButton *maxNum;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->setWindowModality(Qt::WindowModality::ApplicationModal);
        Dialog->resize(184, 135);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog->sizePolicy().hasHeightForWidth());
        Dialog->setSizePolicy(sizePolicy);
        Dialog->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        okCancel = new QDialogButtonBox(Dialog);
        okCancel->setObjectName("okCancel");
        okCancel->setGeometry(QRect(10, 100, 161, 24));
        okCancel->setOrientation(Qt::Orientation::Horizontal);
        okCancel->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        okCancel->setCenterButtons(true);
        dataNumLabel = new QLabel(Dialog);
        dataNumLabel->setObjectName("dataNumLabel");
        dataNumLabel->setGeometry(QRect(0, 10, 211, 41));
        QFont font;
        font.setPointSize(9);
        dataNumLabel->setFont(font);
        dataNum = new QLineEdit(Dialog);
        dataNum->setObjectName("dataNum");
        dataNum->setGeometry(QRect(0, 40, 181, 22));
        maxNum = new QPushButton(Dialog);
        maxNum->setObjectName("maxNum");
        maxNum->setGeometry(QRect(20, 70, 141, 24));

        retranslateUi(Dialog);
        QObject::connect(okCancel, &QDialogButtonBox::accepted, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(okCancel, &QDialogButtonBox::rejected, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
#if QT_CONFIG(tooltip)
        okCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        dataNumLabel->setText(QCoreApplication::translate("Dialog", "How many data shall we manifest?\n"
"", nullptr));
        maxNum->setText(QCoreApplication::translate("Dialog", "Conjure the Maximus!!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDOMGENERATE_H
