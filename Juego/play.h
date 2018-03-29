#ifndef PLAY_H
#define PLAY_H

#include <QDialog>
#include <QTimer>
#include <QDateTime>
namespace Ui {
class play;
}

class play : public QDialog
{
    Q_OBJECT

public:
    explicit play(QWidget *parent = 0);
    ~play();

public slots:

    void miFuncion();

private slots:
    void on_pushButton_clicked();

private:
    Ui::play *ui;
     QTimer * timer ;
      QTime time;
      int score_A = 0;
      int score_B = 0;
};

#endif // PLAY_H
