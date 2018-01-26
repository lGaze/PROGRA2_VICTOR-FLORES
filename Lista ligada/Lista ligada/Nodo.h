#pragma once

struct Nodo
{
	Nodo(int value);
	~Nodo();
	Nodo*getnext();
	void setnext(Nodo*Next);
	Nodo*getprev();
	void setprev(Nodo*Prev);
	int getval();
	int value;
	Nodo*next;
	Nodo*prev;


};

