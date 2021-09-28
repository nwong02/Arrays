#include <stdio.h>
#include <stdlib.h>

/*
* Title			: OneMore.cpp
* Project		: Arrays
* Author		: Nelson Wong	
* Description	: From Savitch 4th Ed. Chapter 5 self test exercises
*/

int oneMore(int a[], int entries);

int oneMore(int a[], int entries)
{
	for (int i = 0; i < entries; i++)
	{
		a[i] =  a[i] + 1;
		printf("%d", a[i]);
	}
	return 1;
}



double outOfOrder(double values[], int entries)
{
	for (int i = 0; i < entries; i++)
	{
		if (values[i] > values[i + 1])
		{
			return i + 1;
		}
		return 0;
	}
}




int main()
{
	int values[5] = { 1, 2, 3, 4, 5 };
	oneMore(values, 5);
	return 1;
}