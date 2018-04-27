#ifndef SAVE_DATA_H
#define SAVE_DATA_H


#include <QString>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonDocument>
#include <QJsonArray>
#include <vector>
#include <QFile>
#include <QDebug>

using namespace std;


struct Unidad{

    QString Nombre;
    int Score_A;
    int Score_B;
    int Shoot;

    void read(const QJsonObject &json);
    void write(QJsonObject &json);
};

struct Juego{

    vector<Unidad>Unidades;
    QString Nombre;
    void read(const QJsonObject &json);
    void write(QJsonObject &json);
};

class manager{

    vector<Juego>Juegos;
    void read_save(const QJsonObject &json);
    void write_save(QJsonObject &json);
    void Load();
    void Save();
}
#endif // SAVE_DATA_H
