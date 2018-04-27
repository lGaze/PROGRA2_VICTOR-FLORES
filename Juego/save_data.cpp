#include "save_data.h"



void Unidad::read(const QJsonObject &json)
{
    Nombre = json["nombre"].toString();
    Score_A = json["Score_A"].toInt();
    Score_B = json["Score_B"].toInt();
    Shoot = json["Shoot"].toInt();

}

void Unidad::write(QJsonObject &json)
{

}



void Juego::read(const QJsonObject &json)
{
    Nombre = json["nombre"].toString();
    Unidades.clear();

    QJsonArray jUnidades = json[Unidades].toArray();
    for(int i= 0; i<jUnidades; i++)
    {
        QJsonObject jUnidad = jUnidades[i].toObject();
        Unidad s_Unidad;
        s_Unidad.read(jUnidad);
        Unidades.push_back(s_Unidad);
    }

}

void Juego::write(QJsonObject &json)
{
    json["Juego"] = Nombre;
    QJsonArray jUnidades;
    for(int i = 0; i<Unidades.size(); i++)
    {
        QJsonObject jUnidad;
        Unidades[i].write(jUnidad);
        jUnidades.append(jUnidad);
    }
     json["Unidad"] = jUnidades;
}



void manager::read_save(const QJsonObject &json)
{
    Juegos.clear();
    QJsonArray jJuegos = json[Juegos].toArray();
    for(int i= 0; i<jJuegos; i++)
    {
        QJsonObject jJuego = jJuegos[i].toObject();
        Juego s_Juego;
        s_Juego.read(jJuego);
        Juegos.push_back(s_Juego);
    }
}

void manager::write_save(QJsonObject &json)
{
    QJsonArray jJuegos;
    for(unsigned int i = 0; i<Juegos.size(); i++)
    {
        QJsonObject jJuego;
        Juegos[i].write(jJuego);
        jJuegos.append(jJuego);
    }
    json["Juego"] = jJuegos;
}

void manager::Load()
{
    QFile file(QString ("Save.txt"));

    if(!file.open(QIODevice::ReadOnly)){
        file.close();
        qDebug() <<"Could not load." << endl;
        return;
    }
    QByteArray data = file.readAll();
    QJsonDocument loadDoc(QJsonDocument::fomJson(data));
    read_save(loadDoc.object());
    file.close();
}

void manager::Save()
{
   QFile file(QString ("Save.txt"));

   if(!file.open(QIODevice::WriteOnly)){
       file.close();
       qDebug() <<"Could not save." << endl;
       return;
       QJsonObject json;
       write_save(json);
       file.close();
}
