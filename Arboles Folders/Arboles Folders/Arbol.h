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
	bool RmDir(string nombre);
	void CDback();
	void CDRoot();
	void CDPadreActual();
	NODO * Root;
	int contador = 0;
	NODO * PadreActual;
	NODO* PadreAnterior;
	NODO * nodo;
	
};

