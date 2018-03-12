#include "stdafx.h"
#include "Nodo.h"
#include "Lista ligada.h"
#define T int



int main()
{ 
	Lista_ligada<T> list;
	list.ADD_start('a');
	list.ADD_end('b');
	list.ADD_end('c');
	list.ADD_end('T');
	list.ADD_start('W');
	list.Print();
	list.Recorrer(4);

	return 0;
}