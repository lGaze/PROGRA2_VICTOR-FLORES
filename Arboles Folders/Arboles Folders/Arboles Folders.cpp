// Arboles Folders.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Arbol.h"



int main()
{
	Arbol folders;
	folders.MkDir("musica");
	folders.MkDir("artistas");
	folders.Dir();
	folders.CD("artistas");
	folders.MkDir("canciones");
	folders.MkDir("generos");
	folders.Dir();
	folders.RmDir("canciones");
	folders.Dir();
	folders.CDback();
	folders.MkDir("Indie");
	folders.MkDir("Bandas");
	folders.Dir();

	
    return 0;
}

