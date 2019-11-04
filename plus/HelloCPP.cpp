#include <iostream>
#include "HelloCPP.h"
using namespace std;

extern "C" int helloFunction()
{
	cout << "Hello, World from CPP function \n";
	return 5;
}



