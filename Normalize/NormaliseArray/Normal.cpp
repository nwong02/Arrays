/*
* Title			: Normal.cpp
* Project		: Array - NormaliseArray
* Author		: Nelson Wong
* Description	: From Savitch, Mock - Problem Solving C++ (2017) Practice Problem 3: Write a void function called normaliseArray that takes as input an array of integers, an empty array of type double, and an integer which specifies the size of the arrays. Your function should copy the integer array and create a normalised version of it in the array of doubles. To do this, copy each element from the original array to the second array after dividing it by the sum of the elements of the original array
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



void normaliseArray(int entries[], double normalised[], int numOfEntries)
{
	for (int i = 0; i < numOfEntries; i++)
	{
		
	}
}


int main()
{
	return 0;
}