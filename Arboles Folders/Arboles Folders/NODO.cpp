#include "stdafx.h"
#include "NODO.h"


NODO::NODO(string nombre)
{
	pNextSibling = NULL;
	this->nombre = nombre;
}


NODO::~NODO()
{

}

NODO * NODO::getNextSibling()
{
	return this->getNextSibling();
}

void NODO::setNextSibling(NODO * pNextSibling)
{
	this->pNextSibling = pNextSibling;
}

string NODO::getNombre()
{
	return this->nombre;
}
