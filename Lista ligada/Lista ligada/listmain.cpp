#include "stdafx.h"
#include "Nodo.h"
#include "Lista ligada.h"


int main()
{ 
	Lista_ligada list;
	list.ADD_start(1);
	list.ADD_end(2);
	list.ADD_end(3);
	list.ADD_end(4);
	list.ADD_start(5);
	list.Print();
	list.Recorrer(4);

	return 0;
}