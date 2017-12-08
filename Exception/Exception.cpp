// Exception.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	try 
	{
		throw 20;
	}
	catch (int e)
	{
		cout << "An exception occured. Exception No. " << e << '\n';
	}

    return 0;
}

