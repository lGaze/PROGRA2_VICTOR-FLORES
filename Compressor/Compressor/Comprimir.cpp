#include "stdafx.h"
#include "Comprimir.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;


CComprimir::CComprimir()
{
}


CComprimir::~CComprimir()
{
}


void CComprimir::Comprimir()
{
	ifstream archivo;
	string texto;
	string token;
	vector <string> palabras;
	vector <string> repetidas;
	ofstream ID;
	char delim = ' ';

	ID.open("ID", ios::out);
	archivo.open("Prueba_compressor.txt" , ios::in);

	if (archivo.fail())   
	{
		cout << "no se pudo cargar el archivo.txt" << endl;
		return;
	}
	while (!archivo.eof())
	{
		getline(archivo, texto);
		istringstream ss(texto);
		while (getline(ss, token, delim))
		{
			palabras.push_back(token);
		}
		
	}


	for (int i = 0; i < palabras.size(); i++)
	{ 
		for (int j = 0; j < palabras.size(); j++)
		{
			if (i == j)
			{
				continue;
			}
			if (palabras[i] == palabras[j])
			{
				repetidas.push_back(palabras[i]);
			}
		}
	}
	
	for (int i = 0; i < repetidas.size(); i++)
	{
		for (int j = 0; j < palabras.size(); j++)
		{
			if (i == j)
			{
				continue;
			}
			if (repetidas[i] == palabras[j])
			{
				ID << to_string(i) << ':'  << palabras[j] << endl;
				palabras[j] = to_string(i);
			}
		}
	}
	
	ofstream archivo_p2;

	archivo_p2.open("Prueba_compressor_2.txt", ios::out);

	for (int i = 0; i < palabras.size(); i++)
	{
		archivo_p2 << palabras[i] << " ";
	}


}
