/********************************************************************************
** Form generated from reading UI file 'play.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAY_H
#define UI_PLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_play
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_4;

    void setupUi(QDialog *play)
    {
        if (play->objectName().isEmpty())
            play->setObjectName(QStringLiteral("play"));
        play->setEnabled(true);
        play->resize(400, 300);
        label = new QLabel(play);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 120, 61, 16));
        label_2 = new QLabel(play);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 120, 55, 16));
        label_3 = new QLabel(play);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 40, 61, 31));
        QFont font;
        font.setFamily(QStringLiteral("MS Serif"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        pushButton = new QPushButton(play);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(150, 190, 93, 28));
        label_4 = new QLabel(play);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(true);
        label_4->setGeometry(QRect(140, 240, 111, 16));

        retranslateUi(play);

        QMetaObject::connectSlotsByName(play);
    } // setupUi

    void retranslateUi(QDialog *play)
    {
        play->setWindowTitle(QApplication::translate("play", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("play", "TEAM A", Q_NULLPTR));
        label_2->setText(QApplication::translate("play", "TEAM B", Q_NULLPTR));
        label_3->setText(QString());
        pushButton->setText(QApplication::translate("play", "Continuar", Q_NULLPTR));
        label_4->setText(QApplication::translate("play", "Termino el Juego.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class play: public Ui_play {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAY_H
