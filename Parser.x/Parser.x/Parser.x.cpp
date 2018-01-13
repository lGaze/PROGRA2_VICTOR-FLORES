// Parser.x.cpp: define el punto de entrada de la aplicación de consola.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <sstream>
#include <vector>
using namespace std;
struct vertex
{
	double x, y, z;

};

void leer();

int main()
{
	leer();
    return 0;
}

void leer()
{
	vector<vertex>muchos_vectores;
	vertex *v;
	ifstream archivo_x;
	string  vec;
	string texto;
	string vert;
	string maxvert;
	string token;
	string token2;
	string input;
	string token3;
	int vertices;
	int i = 0;
	int n = 0;
	int p = 0;
	char k;

	archivo_x.open("C:\\Users\\Victor\\Desktop\\PROGRA II\\Modelos\\NuCroc.X", ios::in);     //Abrir acrhivo

	
	if (archivo_x.fail())         //Error al abrir el archivo
	{
		cout << "no se pudo cargar el archivo" << endl;
		

	}

	while (!archivo_x.eof())            //Leer el archivo hasta que acabe
		{
		getline(archivo_x, texto);

		if (texto[0] == ' ' && texto[1] == 'M' && texto[2] == 'e')         //encontrar el nombre del mesh
		{ 
			getline(archivo_x, vert);
			cout << texto << endl;
			
			
			
		


			while (vert[n] != ';')             //saca el numero de vertices totales
			{
				if (vert[n] != ' ')
				{
				 
				 maxvert += vert[n];
				}

				n++;
			}        
			int vertices = stoi(maxvert);     // convierte el string en int
			cout << "tiene "<< vertices << " vertices." << endl;
			
			k = _getch();
			while (true)                                   
			{

				switch (k)
				{
				case ' ':                                          //espacio para imprimir una linea 
				{
					getline(archivo_x, texto);
					cout << endl;
					istringstream ss(texto);
					while (getline(ss, token, ','))
					{
						input = token;
						istringstream ss(input);
			
							v = new vertex();

							getline(ss, token2, ' ');
							getline(ss, token2, ' ');
							getline(ss, token2, ';');
							double numero_x = stof(token2);                         //convierte el string en flotantes
							v->x = numero_x; 
							getline(ss, token2, ';');
							double numero_y = stof(token2);
							v->y = numero_y;
							getline(ss, token2, ';');
							double numero_z = stof(token2);
							v->z = numero_z;

							muchos_vectores.push_back(*v);                                         //guardar los vectores

							cout << "X: " << v->x << " Y: " << v->y << " Z: " << v->z << "  (Presione Espacio para el siguiente vertice) (Enter para imprimir todos los vertices)" << endl;
							

							delete(v);

					}
					k = _getch();
					vertices--;
					break;
				}


				case 13:
				{
					while (i< vertices)                     // saca todos los vertices 
					{
						getline(archivo_x, texto);
						cout << endl;
						istringstream ss(texto);
						while (getline(ss, token, ','))
						{
							input = token;

							istringstream ss(input);
							v = new vertex();

							getline(ss, token2, ' ');
							getline(ss, token2, ' ');
							getline(ss, token2, ';');
							double numero_x = stof(token2);
							v->x = numero_x;
							getline(ss, token2, ';');
							double numero_y = stof(token2);
							v->y = numero_y;
							getline(ss, token2, ';');
							double numero_z = stof(token2);
							v->z = numero_z;

							muchos_vectores.push_back(*v);

							cout << "X: " << v->x << " Y: " << v->y << " Z: " << v->z << endl;

							delete(v);
							i++;
						}
					}
					

					
					break;

				}


				}
			}

			//----------------------------------------------------------------------------------------------------------------------
		
		
			
			
			
			
			
				

		}

		

	}
	archivo_x.close();
}
