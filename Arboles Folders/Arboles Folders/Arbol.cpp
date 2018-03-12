#include "stdafx.h"
#include "Arbol.h"
#include "NODO.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;


Arbol::Arbol()
{
	nodo = new NODO("Unidad C");
	Root = nodo;
	nodo->setNextSibling(nodo);
	PadreActual = Root;
}


Arbol::~Arbol()
{
	delete nodo;
}

bool Arbol::MkDir(string nombre)
{	
	
	nodo = new NODO(nombre);
		
	
	if (PadreActual->Hijos.size() == 0)
	{
		PadreActual->Hijos.push_back(nodo);
		
	}
	else
	{
		PadreActual->Hijos.push_back(nodo);
		(PadreActual->Hijos.back()-1)->setNextSibling(PadreActual->Hijos.back());
		
	}

	
	
	return true;
}


void Arbol::CD(string nombre)
{
	for (int i = 0; i < PadreActual->Hijos.size(); i++)
	{
		
		if (PadreActual->Hijos[i]->getNombre() == nombre)
		{
			PadreAnterior = PadreActual;
			PadreActual = PadreActual->Hijos[i];
		}

	}
}

void Arbol::Dir()
{
	cout << " " << Root->getNombre()<< endl;
	for (int i = 0; i < PadreActual->Hijos.size(); i++)
	{
		cout << "       " << PadreActual->Hijos[i]->getNombre() << endl;    
	}
}

bool Arbol::RmDir(string nombre)
{
	for (int i = 0; i < PadreActual->Hijos.size(); i++)
	{

		if (PadreActual->Hijos[i]->getNombre() == nombre)
		{
			PadreActual->Hijos.erase(PadreActual->Hijos.begin() + i);
		}

	}
	return true;
}

void Arbol::CDback()
{
	PadreActual = Root;
}





