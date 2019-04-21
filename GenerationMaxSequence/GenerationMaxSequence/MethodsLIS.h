#ifndef METHODS_H
#define METHODS_H

#pragma once
#include <stdio.h>
class MethodsLIS
{
public:
	MethodsLIS(int A[], int aLength);
	~MethodsLIS();
	void methodN2();
private:
	int *list;
	int n;
};

#endif // !METHODS_H


