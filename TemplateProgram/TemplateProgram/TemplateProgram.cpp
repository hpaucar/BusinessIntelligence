// TemplateProgram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "Operaciones.h"

using namespace std;

int main()
{

	printf("Bienvenido :)");
	
	Operaciones obj(5,8);
	cout <<"Num1: "<<obj.getNum1()<<"Num2: "<<obj.getNum2()<<endl;
	cout << "Rpta 1: " << obj.getSuma()<<endl;
	cout << "Rpta 2: " << obj.getResta() << endl;
	cout << "Rpta 3: " << obj.getMultiplicacion() << endl;
	cout << "Rpta 4: " << obj.getDivision() << endl;
		
	system("pause");
    return 0;
}

