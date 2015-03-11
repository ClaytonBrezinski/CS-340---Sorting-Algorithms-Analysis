#ifndef MAIN_CPP
#define MAIN_CPP

#include "Header.h"

void printOut(int numberArray[MAX_ARRAY_SIZE]);
int main()
{
	int numberArray[MAX_ARRAY_SIZE];
	int howManyNums;
	int k;

	cout << "Please enter how many numbers you will be using:" << endl;
	cin >> howManyNums;
	cout << "Please enter the k value for quick-insertion" << endl;
	cin >> k;

	printOut(numberArray);


	return 0;
}


#endif