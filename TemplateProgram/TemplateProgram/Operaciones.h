#ifndef OPERACIONES_H
#define OPERACIONES_H 

#pragma once
#include <stdio.h>

class Operaciones
{
	private:
		int num1;
		int num2;
	public:
		Operaciones();
		Operaciones(int n1, int n2);

		int getNum1();
		int getNum2();

		int getSuma();
		int getResta();
		int getMultiplicacion();
		int getDivision();
};
#endif 
