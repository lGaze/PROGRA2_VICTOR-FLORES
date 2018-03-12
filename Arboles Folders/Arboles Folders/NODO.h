#pragma once
#include <vector>
using namespace std;

class NODO
{
public:

	NODO(string nombre);
	~NODO();
	NODO*pNextSibling;
	NODO*getNextSibling();
	void setNextSibling(NODO*pNextSibling);
	string getNombre();
	vector<NODO*>Hijos;
	string nombre;
};

