/*
* Title			: Maximum.cpp
* Project		: Arrays - Maximum
* Author		: Nelson Wong
* Description	: From Savitch, Mock - Problem Solving with C++ (2017), 7.1: Write a function findMax which takes as input an array of doubles which are greater than zero and an interger which specifies how many elements there are in the array. The function should return the largest value in the array
*/

// #include <iostream>
#include <stdio.h>

using namespace std;



double findMax(double entries[], int numberOfElements);

double findMax(double entries[], int numberOfElements)
{
	double maxValue = entries[0];
	double minValue = entries[0];
	for (int i = 0; i < numberOfElements; i++)
	{
		
		if (entries[i] > maxValue)
		{
			maxValue = entries[i];
		}
	}
	printf("Maximum value is: %f\n", maxValue);
	return maxValue;
}





int main(void)
{

	double a[5] = { 50, 100, 20, 10 };
	int elements = 5;

	double b[10] = { 20, 21, 22, 23, 45, 99, 8 };
	int b2 = 10;

	findMax(a, elements);
	findMax(b, b2);

	return 0;
}
