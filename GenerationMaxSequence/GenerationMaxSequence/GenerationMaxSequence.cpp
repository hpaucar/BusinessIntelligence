// GenerationMaxSequence.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <cstdlib>
#include "MethodsLIS.h"

using namespace std;


int main()
{	
	
	std::cout << "Hello World my friends :)" << std::endl;
/*
	int months = 12;
	int startYear = 2009;
	int finishYear = 2018;
	int minValue = -100;
	int maxValue = +10000;
	int maxRow = 10000;
	string lineText = "";
	string fileName = "GenarationMaxSequence_" + std::to_string(maxRow)+".txt";
	ofstream myFile;

	myFile.open(fileName);

	for (int j = startYear ; j <= finishYear; j++)
	{
		for (int k = 1; k <= months; k++)
		{
			lineText = lineText + std::to_string(k) + "/" + std::to_string(j) + "; ";
		}
	}

	myFile << lineText+"\n";
	
	
	for (int i = 1; i < maxRow; i++)
	{	lineText = "";
		for (int j = startYear; j <= finishYear; j++)
		{
			for (int k = 1; k <= months; k++)
			{
				lineText = lineText + std::to_string(rand() % maxValue + minValue) + "; ";
			}
		}
		myFile << lineText+"\n";
	}

	
	myFile.close();
*/

	//int vv[] = { 25,26,34,2,3,18,4,5,7,2,15,76,79,87 };
	int vv[] = { 2,5,3,4,8,6,7,8,9};

	MethodsLIS obj(vv,9);

	obj.methodN2();

	system("pause");

    return 0;
}

