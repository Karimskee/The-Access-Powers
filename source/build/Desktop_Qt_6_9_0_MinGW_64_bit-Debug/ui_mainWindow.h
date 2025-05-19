/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFile;
    QAction *actionReset;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *upperBar;
    QHBoxLayout *horizontalLayout;
    QToolButton *exit;
    QToolButton *minimize;
    QSpacerItem *horizontalSpacer;
    QWidget *main;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *ask;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *manual;
    QPushButton *random;
    QPushButton *reset;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(791, 594);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(31, 31, 31, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush2(QColor(82, 82, 82, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        QBrush brush3(QColor(68, 68, 68, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        QBrush brush4(QColor(27, 27, 27, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        QBrush brush5(QColor(37, 37, 37, 255));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        QBrush brush6(QColor(33, 33, 33, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        QBrush brush7(QColor(38, 38, 38, 255));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush7);
        QBrush brush8(QColor(0, 0, 0, 255));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        QBrush brush9(QColor(32, 32, 32, 255));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush9);
        QBrush brush10(QColor(0, 0, 255, 255));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush10);
        QBrush brush11(QColor(85, 0, 255, 255));
        brush11.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush11);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush1);
        QBrush brush12(QColor(255, 255, 220, 255));
        brush12.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush12);
        QBrush brush13(QColor(255, 255, 255, 127));
        brush13.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush8);
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
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush7);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush10);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush11);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush8);
#endif
        QBrush brush14(QColor(255, 0, 0, 255));
        brush14.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush14);
        QBrush brush15(QColor(85, 0, 0, 255));
        brush15.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush15);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush14);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush14);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush7);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush7);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush15);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush14);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush14);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush14);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush15);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush12);
        QBrush brush16(QColor(85, 0, 0, 127));
        brush16.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush16);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush15);
#endif
        MainWindow->setPalette(palette);
        MainWindow->setAutoFillBackground(false);
        actionFile = new QAction(MainWindow);
        actionFile->setObjectName("actionFile");
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName("actionReset");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        upperBar = new QWidget(centralwidget);
        upperBar->setObjectName("upperBar");
        upperBar->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        horizontalLayout = new QHBoxLayout(upperBar);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        exit = new QToolButton(upperBar);
        exit->setObjectName("exit");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::ApplicationExit));
        exit->setIcon(icon);
        exit->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(exit);

        minimize = new QToolButton(upperBar);
        minimize->setObjectName("minimize");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::ListRemove));
        minimize->setIcon(icon1);
        minimize->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(minimize);

        horizontalSpacer = new QSpacerItem(909, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(upperBar);

        main = new QWidget(centralwidget);
        main->setObjectName("main");
        main->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(main);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, 100, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        ask = new QLabel(main);
        ask->setObjectName("ask");
        QFont font;
        font.setFamilies({QString::fromUtf8("TS Rotger")});
        font.setPointSize(30);
        font.setWeight(QFont::Medium);
        font.setKerning(true);
        font.setHintingPreference(QFont::PreferDefaultHinting);
        ask->setFont(font);
        ask->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        ask->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        ask->setScaledContents(false);
        ask->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(ask);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(10, -1, 10, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, -1, 0, 0);
        manual = new QPushButton(main);
        manual->setObjectName("manual");
        manual->setMaximumSize(QSize(400, 16777215));

        verticalLayout_2->addWidget(manual);

        random = new QPushButton(main);
        random->setObjectName("random");
        random->setMaximumSize(QSize(400, 16777215));
        QFont font1;
        font1.setKerning(true);
        random->setFont(font1);
        random->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        verticalLayout_2->addWidget(random);

        reset = new QPushButton(main);
        reset->setObjectName("reset");
        reset->setMaximumSize(QSize(400, 16777215));

        verticalLayout_2->addWidget(reset);


        horizontalLayout_4->addLayout(verticalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout->addWidget(main);

        verticalLayout->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(exit, minimize);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionFile->setText(QCoreApplication::translate("MainWindow", "File", nullptr));
        actionReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        minimize->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        ask->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">are you petting me.. master?</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        ask->setText(QCoreApplication::translate("MainWindow", "Ask.. and you shall be given", nullptr));
        manual->setText(QCoreApplication::translate("MainWindow", "I Inscribe the Sacred Data by Hand", nullptr));
        random->setText(QCoreApplication::translate("MainWindow", "Conjure Mysterious Data from the Void", nullptr));
        reset->setText(QCoreApplication::translate("MainWindow", "Purge All Records from This Realm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
