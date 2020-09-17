/********************************************************************************
** Form generated from reading UI file 'PreferencesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOG_H
#define UI_PREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *emulatorLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *fullScreenCheckBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QLineEdit *fullScreenParameterLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *otherParametersLineEdit;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *romsDirectoryLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *imagesDirectoryLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *playMusicCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *resumeMusicCheckBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *musicDirectoryLineEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QString::fromUtf8("PreferencesDialog"));
        PreferencesDialog->resize(536, 307);
        PreferencesDialog->setMinimumSize(QSize(400, 200));
        verticalLayout = new QVBoxLayout(PreferencesDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(PreferencesDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        emulatorLineEdit = new QLineEdit(tab);
        emulatorLineEdit->setObjectName(QString::fromUtf8("emulatorLineEdit"));

        horizontalLayout_2->addWidget(emulatorLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        fullScreenCheckBox = new QCheckBox(tab);
        fullScreenCheckBox->setObjectName(QString::fromUtf8("fullScreenCheckBox"));

        horizontalLayout_3->addWidget(fullScreenCheckBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_9->addWidget(label_2);

        fullScreenParameterLineEdit = new QLineEdit(tab);
        fullScreenParameterLineEdit->setObjectName(QString::fromUtf8("fullScreenParameterLineEdit"));

        horizontalLayout_9->addWidget(fullScreenParameterLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        otherParametersLineEdit = new QLineEdit(tab);
        otherParametersLineEdit->setObjectName(QString::fromUtf8("otherParametersLineEdit"));

        horizontalLayout_4->addWidget(otherParametersLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        romsDirectoryLineEdit = new QLineEdit(tab_2);
        romsDirectoryLineEdit->setObjectName(QString::fromUtf8("romsDirectoryLineEdit"));

        horizontalLayout_6->addWidget(romsDirectoryLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        imagesDirectoryLineEdit = new QLineEdit(tab_2);
        imagesDirectoryLineEdit->setObjectName(QString::fromUtf8("imagesDirectoryLineEdit"));

        horizontalLayout_7->addWidget(imagesDirectoryLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        playMusicCheckBox = new QCheckBox(tab_2);
        playMusicCheckBox->setObjectName(QString::fromUtf8("playMusicCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(playMusicCheckBox->sizePolicy().hasHeightForWidth());
        playMusicCheckBox->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(playMusicCheckBox);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        resumeMusicCheckBox = new QCheckBox(tab_2);
        resumeMusicCheckBox->setObjectName(QString::fromUtf8("resumeMusicCheckBox"));

        horizontalLayout_5->addWidget(resumeMusicCheckBox);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        musicDirectoryLineEdit = new QLineEdit(tab_2);
        musicDirectoryLineEdit->setObjectName(QString::fromUtf8("musicDirectoryLineEdit"));

        horizontalLayout_8->addWidget(musicDirectoryLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        saveButton = new QPushButton(PreferencesDialog);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        horizontalLayout->addWidget(saveButton);

        cancelButton = new QPushButton(PreferencesDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PreferencesDialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), PreferencesDialog, SLOT(close()));
        QObject::connect(fullScreenCheckBox, SIGNAL(clicked(bool)), label_2, SLOT(setEnabled(bool)));
        QObject::connect(fullScreenCheckBox, SIGNAL(clicked(bool)), fullScreenParameterLineEdit, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);
        saveButton->setDefault(true);


        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QCoreApplication::translate("PreferencesDialog", "Preferences", nullptr));
        label->setText(QCoreApplication::translate("PreferencesDialog", "Emulator binary:", nullptr));
        fullScreenCheckBox->setText(QCoreApplication::translate("PreferencesDialog", "Play full-screen", nullptr));
        label_2->setText(QCoreApplication::translate("PreferencesDialog", "Full-screen parameter:", nullptr));
        label_3->setText(QCoreApplication::translate("PreferencesDialog", "Other parameters:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("PreferencesDialog", "Emulator", nullptr));
        label_4->setText(QCoreApplication::translate("PreferencesDialog", "Roms directory:", nullptr));
        label_5->setText(QCoreApplication::translate("PreferencesDialog", "Images directory:", nullptr));
        playMusicCheckBox->setText(QCoreApplication::translate("PreferencesDialog", "Play music", nullptr));
        resumeMusicCheckBox->setText(QCoreApplication::translate("PreferencesDialog", "Resume music when a game is exited", nullptr));
        label_6->setText(QCoreApplication::translate("PreferencesDialog", "Music directory:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("PreferencesDialog", "List of games", nullptr));
        saveButton->setText(QCoreApplication::translate("PreferencesDialog", "Save", nullptr));
        cancelButton->setText(QCoreApplication::translate("PreferencesDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H
