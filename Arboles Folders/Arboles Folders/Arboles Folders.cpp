// Arboles Folders.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Arbol.h"
#include <iostream>
#include <string>
using namespace std;



int main()
{
	Arbol folders;
	string nombre;
	string caso;

	while (true)
	{
		cout << "C\\>:";
		cin >> caso;

		if (caso == "MkDir")
		{
			system("cls");
			cout << "C\\>:";
			cin >> nombre;
			folders.MkDir(nombre);
			
		}
		else if(caso == "RmDir")
		{
			system("cls");
			cout << "C\\>:";
			cin >> nombre;
			folders.RmDir(nombre);
			
		}
		else if (caso == "CD")
		{
			system("cls");
			cout << "C\\>:";
			cin >> nombre;
			folders.CD(nombre);
			
		}
		else if (caso == "CD..")
		{
			system("cls");
			cout << "C\\>:";
			folders.CDback();
			
		}
		else if (caso == "Dir")
		{
			system("cls");
			cout << "C:";
			folders.Dir();	
		}
		else
		{
			cout << "Fail";
		}
	}
	
    return 0;
}

