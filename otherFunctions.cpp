#ifndef OTHERFUNCTIONS_CPP
#define OTHERFUNCTIONS_CPP
#include "Header.h"



void printOut(int numberArray[MAX_ARRAY_SIZE])
{
	cout << "the numbers printed out are:" << endl;
	for (int i = 0; i <= MAX_ARRAY_SIZE; i++)
	{
		cout << numberArray[i] << " ";
	}
	cout << endl;
}

#endif