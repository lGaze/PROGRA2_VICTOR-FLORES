// Lista ligada.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Nodo.h"
#include "Lista ligada.h"
#include <iostream>
using namespace std;



Lista_ligada::Lista_ligada()
{
	Start = NULL;
	size = 0;
}

Lista_ligada::~Lista_ligada()
{
}

bool Lista_ligada::ADD_start(int value)
{
	Nodo*nodo1 = new Nodo(value);

	if (Start == NULL)
	{
		Start = nodo1;
		nodo1->setprev(nodo1);
	}

	else
	{
		Nodo*aux = Start;
		aux->setprev(nodo1);
		Start = nodo1;
		nodo1->setnext(aux);
		nodo1->setprev(nodo1);



	}
	size++;
	return true;
}

bool Lista_ligada::ADD_end(int value)
{
	Nodo*nodo1 = new Nodo(value);

	if (Start == NULL)
	{
		Start = nodo1;
		nodo1->setprev(nodo1);
	}
	else
	{
		Nodo*aux = Start;
		while (aux->getnext()!= NULL)
		{
			aux = aux->getnext();
		}
		aux->setnext(nodo1);
		nodo1->setprev(aux);
		

	}
	size++;
	return true;
}

void Lista_ligada::Print()
{
	Nodo*aux = Start;
	for (int i = 0; i < size; i++)
	{
		cout << aux->getval() << endl;
		aux = aux->getnext();
		
	}
	cout << "Tu lista tiene: " << size << " nodos" << endl;
}

void Lista_ligada::Recorrer(int i)
{
	Nodo*aux = Start;
	cout << "el valor de tu nodo " << i;
	for (int r = 0; r+1 < i; r++)
	{
		
		aux = aux->getnext();
		
		
	}
	cout << " es: " << aux->getval() << endl;
}

