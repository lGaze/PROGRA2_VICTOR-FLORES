#pragma once

template <class T>
struct Nodo
{
	
	Nodo(T value);
	~Nodo();
	Nodo*getnext();
	void setnext(Nodo*next);
	Nodo*getprev();
	void setprev (Nodo*prev);
	T getval();
	T value;
	Nodo*next;
	Nodo*prev;


};

template <class T>
Nodo<T>::Nodo(T value)
{
	next = NULL;
	prev = NULL;
	this->value = value;
}

template<class T>
Nodo<T>::~Nodo()
{
}

template <class T>
Nodo<T> * Nodo<T>::getnext()
{
	return this->next;
}

template <class T>
void Nodo<T>::setnext(Nodo * next)
{
	this->next = next;
}

template <class T>
Nodo<T> * Nodo<T>::getprev()
{
	return this->prev;
}

template <class T>
void Nodo<T>::setprev(Nodo * prev)
{
	this->prev = prev;
}

template <class T>
T Nodo<T>::getval()
{
	return this->value;
}
