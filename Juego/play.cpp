#include "play.h"
#include "ui_play.h"
#include <QDebug>
#include <QDateTime>
#include <QMessageBox>
#include "mainwindow.h"

play::play(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::play)
{
    ui->setupUi(this);
    ui->label_4->hide();
    timer = new QTimer(this);
    time = QTime::fromString("59","s");
    connect(timer,SIGNAL(timeout()),this,SLOT(miFuncion()));
    timer->start(1000);
}

play::~play()
{
    delete ui;
}

void play::miFuncion()
{
    int Team_A = qrand() % 10 + 1;
    int Team_B = qrand() % 10 + 1;
    int Shoot = qrand() % 10 + 1;



        if (Team_A == Shoot)
        {
            score_A = score_A + qrand() % 4 + 1;
        }
        if (Team_B == Shoot)
        {
            score_B =  score_B+ qrand()  % 4 + 1;
        }

        QTime n;
        n = time.addSecs(1);
        time = n;
        QString time_text = n.toString("ss");
        if(n.second() == 20)
        {

            ui->label_3->close();
            ui->pushButton->setEnabled(true);
            ui->label_4->show();

            if(score_A>score_B)
            {
                 QMessageBox::about(this,"Win","Team A");
                 qDebug () << score_A;
                 qDebug() << score_B;
            }

            if(score_B>score_A)

            {
                QMessageBox::about(this,"Win","Team B");
                qDebug () << score_A;
                qDebug() << score_B;
            }

            if (score_A == score_B)
            {
                 QMessageBox::about(this,"Win","Empate");
                 qDebug () << score_A;
                 qDebug() << score_B;
            }
        }
        ui->label_3->setText(time_text);

}


void play::on_pushButton_clicked()
{
 hide();
}
