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

	cout << "C\\Users"; cout << "\\"; folders.CDPadreActual(); cout << ">";
	while (true)
	{
		
		cin >> caso;
		


		if (caso == "cd..")
		{
			
			folders.CDback();
			cout << "C\\Users"; cout << "\\"; folders.CDPadreActual(); cout << ">";

		}

		else if (caso == "dir")
		{

			cout << "C\\Users"; cout << "\\"; cout << ">";
			folders.Dir(); 
			cout << "C\\Users"; cout << "\\"; folders.CDPadreActual(); cout << ">";
		}

		else if (caso == "mkdir")
		{
			cin >> nombre;
			cout << "C\\Users"; cout << "\\"; folders.CDPadreActual(); cout << ">";
			folders.MkDir(nombre);
			
		}
		else if(caso == "rmdir")
		{
		
			cin >> nombre;
			cout << "C\\Users"; cout << "\\"; folders.CDPadreActual(); cout << ">";
			
			folders.RmDir(nombre);
			
		}
		else if (caso == "cd")
		{
			cin >> nombre;
			folders.CD(nombre);
			cout << "C\\Users"; cout << "\\"; folders.CDPadreActual(); cout << ">";
		}
		
		else if (caso!= "cd" | caso != "mkdir"| caso != "cd.." | caso != "dir" | caso != "rmdir")
		{
			cout << "Fail" << endl;
			cout << "C\\Users"; cout << "\\"; folders.CDPadreActual(); cout << ">";
		}
	}
	
    return 0;
}

