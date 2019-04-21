#include "stdafx.h"
#include "Operaciones.h"

Operaciones::Operaciones(): num1(0), num2(0){}
Operaciones::Operaciones(int a, int b):num1(a), num2(b){}
/*Operaciones::Operaciones(int a, int b)
{
	num1 = a;
	num2 = b;
}*/

int Operaciones::getNum1()
{
	return num1;
}

int Operaciones::getNum2()
{
	return num2;
}

int Operaciones::getSuma() 
{
	return num1 + num2;
}

int Operaciones::getResta() 
{
	return num1 - num2;
}

int Operaciones::getMultiplicacion()
{
	return num1*num2;
}

int Operaciones::getDivision()
{
	return num1/num2;
}

