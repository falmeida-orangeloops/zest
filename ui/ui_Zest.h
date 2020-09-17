/********************************************************************************
** Form generated from reading UI file 'Zest.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZEST_H
#define UI_ZEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Zest
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *imageWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *searchBox;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *preferencesButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *playButton;
    QPushButton *exitButton;

    void setupUi(QDialog *Zest)
    {
        if (Zest->objectName().isEmpty())
            Zest->setObjectName(QString::fromUtf8("Zest"));
        Zest->resize(592, 300);
        verticalLayout = new QVBoxLayout(Zest);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        imageWidget = new QLabel(Zest);
        imageWidget->setObjectName(QString::fromUtf8("imageWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imageWidget->sizePolicy().hasHeightForWidth());
        imageWidget->setSizePolicy(sizePolicy);
        imageWidget->setMinimumSize(QSize(320, 224));
        imageWidget->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(imageWidget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        searchBox = new QLineEdit(Zest);
        searchBox->setObjectName(QString::fromUtf8("searchBox"));
        searchBox->setMinimumSize(QSize(250, 0));

        verticalLayout_2->addWidget(searchBox);

        listWidget = new QListWidget(Zest);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setSortingEnabled(true);

        verticalLayout_2->addWidget(listWidget);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        preferencesButton = new QPushButton(Zest);
        preferencesButton->setObjectName(QString::fromUtf8("preferencesButton"));

        horizontalLayout->addWidget(preferencesButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        playButton = new QPushButton(Zest);
        playButton->setObjectName(QString::fromUtf8("playButton"));

        horizontalLayout->addWidget(playButton);

        exitButton = new QPushButton(Zest);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));

        horizontalLayout->addWidget(exitButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Zest);
        QObject::connect(exitButton, SIGNAL(clicked()), Zest, SLOT(close()));

        playButton->setDefault(true);


        QMetaObject::connectSlotsByName(Zest);
    } // setupUi

    void retranslateUi(QDialog *Zest)
    {
        Zest->setWindowTitle(QCoreApplication::translate("Zest", "Zest", nullptr));
        imageWidget->setText(QCoreApplication::translate("Zest", "TextLabel", nullptr));
        searchBox->setPlaceholderText(QCoreApplication::translate("Zest", "Search", nullptr));
        preferencesButton->setText(QCoreApplication::translate("Zest", "Preferences", nullptr));
        playButton->setText(QCoreApplication::translate("Zest", "Play", nullptr));
        exitButton->setText(QCoreApplication::translate("Zest", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Zest: public Ui_Zest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZEST_H
