#pragma once
#include "NODO.h"

class Arbol
{
public:

	Arbol();
	~Arbol();
	bool MkDir(string nombre);
	void CD(string nombre);
	void Dir();
	NODO * Root;
	int contador = 0;
	NODO * PadreActual;
	
};
