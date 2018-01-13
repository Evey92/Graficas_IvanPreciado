// Graficas_Ivan.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

struct Vertex
{
	float x, y, z;
};

int main()
{
	fstream vertexFile;
	string fileName, word, line;

	cout << "Por favor introduzca el nombre del archivo. \n";
	getline(cin, fileName);

	vertexFile.open(fileName + ".X", ios_base::in, ios::binary);
	
	if (vertexFile.is_open())
	{
		cout << "Archivo cargado con exito!" << endl;
	}
	else
	{
		cout << "No se pudo cargar el archivo" << endl;
	}

	word= " Mesh";
	while (getline(vertexFile, word))
	{
		while (!vertexFile.eof())
		{
			if (word.compare(line) == 0)
			{
				cout << "Encontré la palabra!\n";
			}
		}
	}


    return 0;
}

