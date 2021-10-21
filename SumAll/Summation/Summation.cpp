/*
* Title			: Summation.cpp
* Project		: Arrays - Summation
* Author		: Nelson Wong
* Description	: From Savitch, Mock - Problem Solving with C++ (2017) Problem 7.2: Write a function called sumAll which takes as input an array of integer values and an integer which specifies how many elements there are in the array. The function should return the sum of all the elements in the array. Programmed in C
*/

#include <stdio.h>


int sumAll(int values[], int elements);

int sumAll(int values[], int elements)
{
	int sum = 0;
	for (int i = 0; i < elements; i++)
	{
		sum += values[i];
	}
	printf("The sum of all elements is: %d\n", sum);
	return sum;
}


int main(void)
{
	int a1[5] = { 10, 11, 12, 13, 14 };
	int a1Elements = 5;

	int a2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int a2Elements = 10;

	int a3[2] = { 1, 3 };
	int a3Elements = 2;

	sumAll(a1, a1Elements);
	sumAll(a2, a2Elements);
	sumAll(a3, a3Elements);
}