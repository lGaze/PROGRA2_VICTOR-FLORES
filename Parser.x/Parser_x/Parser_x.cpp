#include <iostream>
#include "Parser_x.h"
#include <fstream>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <sstream>
#include <vector>
using namespace std;

//#define USE_STACK
#define USE_HEAP
	#define USE_MALLOC
	//#define USE_NEW
//#define USE_VECTOR


Parseador::Parseador()
{
}

Parseador::~Parseador()
{
}



void Parseador::Abrir()
{


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

//-------------------
#ifdef USE_STACK
	vertex arr[3];

#elif defined USE_HEAP

	#ifdef USE_MALLOC
	vertex * v;
	v = (vertex*)malloc(3 * sizeof(vertex));

	#elif defined(USE_NEW)

	vertex *v = new vertex[3];

	#endif
	

#elif defined USE_VECTOR
	vector<vertex>muchos_vectores;

#endif
//----------------------------------------


	archivo_x.open( "Modelos\\CerdoNuevo.x" , ios::in);     //Abrir acrhivo


	if (archivo_x.fail())         //Error al abrir el archivo
	{
		cout << "no se pudo cargar el archivo" << endl;
		return;


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
			cout << "tiene " << vertices << " vertices." << endl;

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

#ifdef USE_VECTOR
						vertex v;

						getline(ss, token2, ' ');
						getline(ss, token2, ' ');
						getline(ss, token2, ';');
						double numero_x = stof(token2);                         //convierte el string en flotantes
						v.x = numero_x;
						getline(ss, token2, ';');
						double numero_y = stof(token2);
						v.y = numero_y;
						getline(ss, token2, ';');
						double numero_z = stof(token2);
						v.z = numero_z;

						muchos_vectores.push_back(v);                                         //guardar los vectores

						cout << "X: " << v.x << " Y: " << v.y << " Z: " << v.z  << "  (Presione Espacio para el siguiente vertice) (Enter para imprimir todos los vertices)" << endl;
#elif defined USE_HEAP

					

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
						cout << "X: " << v->x << " Y: " << v->y << " Z: " << v->z << "  (Presione Espacio para el siguiente vertice) (Enter para imprimir todos los vertices)" << endl;


#endif

#ifdef USE_HEAP
	#ifdef USE_MALLOC
						free(v);
	#elif defined(USE_NEW)

						delete [] v;
	#endif

						
#endif 

						

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
#ifdef USE_VECTOR
							vertex v;

							getline(ss, token2, ' ');
							getline(ss, token2, ' ');
							getline(ss, token2, ';');
							double numero_x = stof(token2);                         
							v.x = numero_x;
							getline(ss, token2, ';');
							double numero_y = stof(token2);
							v.y = numero_y;
							getline(ss, token2, ';');
							double numero_z = stof(token2);
							v.z = numero_z;

							muchos_vectores.push_back(v);

							cout << "X: " << v.x << " Y: " << v.y << " Z: " << v.z << endl;
#else
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
							cout << "X: " << v->x << " Y: " << v->y << " Z: " << v->z << endl;
#endif	


#ifdef USE_HEAP
	#ifdef USE_MALLOC
							free(v);
	#elif defined(USE_NEW)

							delete [] v;
	#endif


#endif 

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














