#include <iostream>
#include "HelloCPP.h"
using namespace std;

extern "C" int callFunctionX(callbackFunction f)
{
	cout << "callFunctionX \n";
	int a=7;
	f(a);
	return 1;
}

extern "C" int helloFunction()
{
	cout << "Hello, World from CPP function \n";
	return 5;
}



