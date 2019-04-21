#include "stdafx.h"
#include "MethodsLIS.h"
#include <iostream>
#include <vector>
#include <algorithm>    // std::min_element, std::max_element


using namespace std;

MethodsLIS::MethodsLIS(int A[],const int aLength)
{
	list = A;
	n = aLength;
}
MethodsLIS::~MethodsLIS()
{
}

void MethodsLIS::methodN2()
{
	int min,cont;
	int max = 0;
	std::vector<int> L(n);
	L.at(0) = 1;
	for (int i = 0; i < n; i++)
	{		
		for (int j = 0; j < i; j++)
		{
			if (list[i] > list[j]) 
			{
				if (L.at(i) < 1 + L.at(j)) 
				{
					L.at(i) = 1 + L.at(j);
				}				
			}
			
		}
		std::cout << "=> " << L.at(i)<<std::endl;
	}

	int rr = *std::max_element(L.begin(), L.end());

	std::cout << " Max number of LIS is: "<<rr<< std::endl;
}

