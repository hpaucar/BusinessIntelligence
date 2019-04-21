// GenderArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
#include <vector>

int main()
{
	/*
	std::string femaleFile = "femaleFile.txt";

	std::vector<std::string> males = { "Hombre","Masculino","Masc", "H" };
	std::vector<std::string> females = { "Mujer", "Femenino", "Fem", "M" };
	std::string line = "";
	std::ifstream myFileM("maleFile.txt");
	std::ofstream myFileM2("maleFileComplete.txt");
	std::ifstream myFileF("femaleFile.txt");
	std::ofstream myFileF2("femaleFileComplete.txt");


	if (myFileM.is_open() && myFileM2.is_open())
	{
		while (std::getline(myFileM,line))
		{
			myFileM2 << line + "; " + males.at(rand() % 4 + 0) +"\n";
		}

		myFileM.close();
		myFileM2.close();
	}
	else
	{
		std::cout << "unable to open the files"<<std::endl;
	}
	
	if (myFileF.is_open() && myFileF2.is_open())
	{
		while (std::getline(myFileF, line))
		{
			myFileF2 << line + "; " + females.at(rand() % 4 + 0) + "\n";
		}

		myFileF.close();
		myFileF2.close();
	}
	else
	{
		std::cout << "unable to open the files" << std::endl;
	}

	*/
	std::string lineFinal = "";
	std::ifstream myFileM3("maleFileComplete.txt");
	std::ifstream myFileF3("femaleFileComplete.txt");
	std::ofstream myFileFinal("maleFemaleFileComplete.txt");

	if (myFileFinal.is_open() && myFileM3.is_open() && myFileF3)
	{
		while (std::getline(myFileM3, lineFinal))
		{
			myFileFinal<< lineFinal + "\n";
		}

		while (std::getline(myFileF3, lineFinal))
		{
			myFileFinal << lineFinal + "\n";
		}

		myFileM3.close();
		myFileF3.close();
		myFileFinal.close();
	}
	else
	{
		std::cout << "unable to open the files" << std::endl;
	}

	return 0;
}

