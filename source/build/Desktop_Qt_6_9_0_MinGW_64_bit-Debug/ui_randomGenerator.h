/********************************************************************************
** Form generated from reading UI file 'randomGenerator.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANDOMGENERATOR_H
#define UI_RANDOMGENERATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_randomGenerator
{
public:
    QLineEdit *metersN;
    QDialogButtonBox *okCancel;
    QPushButton *maxNum;
    QLabel *metersNLabel;
    QLineEdit *buildingsN;
    QLabel *buildingsNLabel;

    void setupUi(QDialog *randomGenerator)
    {
        if (randomGenerator->objectName().isEmpty())
            randomGenerator->setObjectName("randomGenerator");
        randomGenerator->setWindowModality(Qt::WindowModality::ApplicationModal);
        randomGenerator->resize(184, 155);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(randomGenerator->sizePolicy().hasHeightForWidth());
        randomGenerator->setSizePolicy(sizePolicy);
        randomGenerator->setMinimumSize(QSize(184, 135));
        randomGenerator->setMaximumSize(QSize(184, 155));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(22, 22, 22, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush2(QColor(57, 57, 57, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        QBrush brush3(QColor(47, 47, 47, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        QBrush brush4(QColor(19, 19, 19, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        QBrush brush5(QColor(26, 26, 26, 255));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        QBrush brush6(QColor(23, 23, 23, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush5);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush7);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush1);
        QBrush brush8(QColor(0, 0, 255, 255));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush8);
        QBrush brush9(QColor(85, 0, 255, 255));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush9);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush1);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush10);
        QBrush brush11(QColor(177, 177, 177, 127));
        brush11.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush11);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush7);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush5);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush7);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush8);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush9);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush11);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush7);
#endif
        QBrush brush12(QColor(255, 0, 0, 255));
        brush12.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush12);
        QBrush brush13(QColor(85, 0, 0, 255));
        brush13.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush13);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush12);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush12);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush6);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush5);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush7);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush13);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush12);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush12);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush12);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush13);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush10);
        QBrush brush14(QColor(85, 0, 0, 127));
        brush14.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush14);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush13);
#endif
        randomGenerator->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/waterMeter.png"), QSize(), QIcon::Mode::Disabled, QIcon::State::On);
        randomGenerator->setWindowIcon(icon);
        randomGenerator->setStyleSheet(QString::fromUtf8(""));
        randomGenerator->setModal(false);
        metersN = new QLineEdit(randomGenerator);
        metersN->setObjectName("metersN");
        metersN->setGeometry(QRect(10, 30, 163, 22));
        metersN->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        metersN->setAlignment(Qt::AlignmentFlag::AlignCenter);
        okCancel = new QDialogButtonBox(randomGenerator);
        okCancel->setObjectName("okCancel");
        okCancel->setGeometry(QRect(10, 129, 161, 24));
        okCancel->setOrientation(Qt::Orientation::Horizontal);
        okCancel->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        okCancel->setCenterButtons(true);
        maxNum = new QPushButton(randomGenerator);
        maxNum->setObjectName("maxNum");
        maxNum->setGeometry(QRect(20, 101, 141, 24));
        metersNLabel = new QLabel(randomGenerator);
        metersNLabel->setObjectName("metersNLabel");
        metersNLabel->setGeometry(QRect(21, 3, 211, 31));
        QFont font;
        font.setPointSize(9);
        metersNLabel->setFont(font);
        buildingsN = new QLineEdit(randomGenerator);
        buildingsN->setObjectName("buildingsN");
        buildingsN->setGeometry(QRect(10, 75, 163, 22));
        buildingsN->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        buildingsN->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buildingsNLabel = new QLabel(randomGenerator);
        buildingsNLabel->setObjectName("buildingsNLabel");
        buildingsNLabel->setGeometry(QRect(15, 48, 211, 31));
        buildingsNLabel->setFont(font);
        okCancel->raise();
        maxNum->raise();
        metersNLabel->raise();
        metersN->raise();
        buildingsN->raise();
        buildingsNLabel->raise();

        retranslateUi(randomGenerator);

        QMetaObject::connectSlotsByName(randomGenerator);
    } // setupUi

    void retranslateUi(QDialog *randomGenerator)
    {
        randomGenerator->setWindowTitle(QCoreApplication::translate("randomGenerator", "Generate randomly", nullptr));
        metersN->setText(QString());
#if QT_CONFIG(tooltip)
        maxNum->setToolTip(QCoreApplication::translate("randomGenerator", "Will probably crash the application, please have patience :)", nullptr));
#endif // QT_CONFIG(tooltip)
        maxNum->setText(QCoreApplication::translate("randomGenerator", "Conjure the Maximus!!", nullptr));
        metersNLabel->setText(QCoreApplication::translate("randomGenerator", "How many meters to add?", nullptr));
        buildingsN->setText(QString());
        buildingsNLabel->setText(QCoreApplication::translate("randomGenerator", "How many Buildings to add?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class randomGenerator: public Ui_randomGenerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDOMGENERATOR_H
