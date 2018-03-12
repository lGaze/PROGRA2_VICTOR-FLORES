#pragma once
#include"Nodo.h"
#include <iostream>
using namespace std;

template <class T>
class Lista_ligada
{
public:
	Lista_ligada();
	~Lista_ligada();
	bool ADD_start(T value);
	bool ADD_end(T value);
	void Print();
	void Recorrer(int i);

private:

	Nodo<T> * Start;
	int size;
};

template <class T>
Lista_ligada<T>::Lista_ligada()
{
	Start = NULL;
	size = 0;
}

template <class T>
Lista_ligada<T>::~Lista_ligada()
{
}

template <class T>
bool Lista_ligada<T>::ADD_start(T value)
{
	Nodo<T>*nodo1 = new Nodo<T>(value);

	if (Start == NULL)
	{
		Start = nodo1;
		nodo1->setprev(nodo1);
	}

	else
	{
		Nodo<T>*aux = Start;
		aux->setprev(nodo1);
		Start = nodo1;
		nodo1->setnext(aux);
		nodo1->setprev(nodo1);



	}
	size++;
	return true;
}

template <class T>
bool Lista_ligada<T>::ADD_end(T value)
{
	Nodo<T>*nodo1 = new Nodo<T>(value);

	if (Start == NULL)
	{
		Start = nodo1;
		nodo1->setprev(nodo1);
	}
	else
	{
		Nodo<T>*aux = Start;
		while (aux->getnext() != NULL)
		{
			aux = aux->getnext();
		}
		aux->setnext(nodo1);
		nodo1->setprev(aux);


	}
	size++;
	return true;
}

template <class T>
void Lista_ligada<T>::Print()
{
	Nodo<T>*aux = Start;
	for (int i = 0; i < size; i++)
	{
		cout << aux->getval() << endl;
		aux = aux->getnext();

	}
	cout << "Tu lista tiene: " << size << " nodos" << endl;
}

template <class T>
void Lista_ligada<T>::Recorrer(int i)
{
	Nodo<T>*aux = Start;
	cout << "el valor de tu nodo " << i;
	for (int r = 0; r + 1 < i; r++)
	{

		aux = aux->getnext();


	}
	cout << " es: " << aux->getval() << endl;
}
