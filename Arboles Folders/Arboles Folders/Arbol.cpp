#include "stdafx.h"
#include "Arbol.h"
#include "NODO.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;


Arbol::Arbol()
{
	Root = NULL;
}


Arbol::~Arbol()
{
}

bool Arbol::MkDir(string nombre)
{	
	
	NODO * nodo = new NODO(nombre);
	
	if (Root == NULL)
	{
		Root = nodo;	
		nodo->setNextSibling(nodo);
		PadreActual = Root;
	}
	else if (PadreActual->Hijos.size() == 0)
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
			PadreActual = PadreActual->Hijos[i];
		}

	}
}

void Arbol::Dir()
{
	cout << PadreActual->getNombre() << endl;
	for (int i = 0; i < PadreActual->Hijos.size(); i++)
	{
		cout << " " << PadreActual->Hijos[i]->getNombre() << endl;    
	}
}




