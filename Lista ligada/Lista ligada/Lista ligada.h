#pragma once
#include"Nodo.h"

class Lista_ligada
{
public:
	Lista_ligada();
	~Lista_ligada();
	bool ADD_start(int value);
	bool ADD_end(int value);
	void Print();
	void Recorrer(int i);

private:

	Nodo*Start;
	int size;
};
