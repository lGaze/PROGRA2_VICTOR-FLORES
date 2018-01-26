#include "stdafx.h"
#include "Nodo.h"


Nodo::Nodo(int value)
{
	next = NULL;
	prev = NULL;
	this->value = value;
}


Nodo::~Nodo()
{
}


Nodo * Nodo::getnext()
{
	return this->next;
}

void Nodo::setnext(Nodo * next)
{
	this->next = next;
}

Nodo * Nodo::getprev()
{
	return this ->prev;
}

void Nodo::setprev(Nodo * prev)
{
	this->prev = prev;
}


int Nodo::getval()
{
	return this->value;
}
