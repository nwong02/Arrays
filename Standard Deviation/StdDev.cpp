/*
* Title			: StandardDev.cpp
* Project		: Standard Deviatioin
* Author		: Nelson Wong
* Description	: From Savitch 4th Ed. Chapter 5: The standard deviation is a measure of how much the numbers deviate from the average. If the standard deviation is large, the numbers are scattered far from the average. Define a funtion that takes a partially filled array of numbers as its argument and returns the std dev of the numbers in the partially filled array. Since a partially filled array requires two arguments, the function will actually have two formal parameters: an array parameter and a formal parameter of type int that gives the number of array positions used. The numbers in the array will be of type double.
*/


#include <iostream>
#include <cmath>

using namespace std;


double calculateAverage(double values[], int positions);

double calculateAverage(double values[], int entries)
{
	double sum = 0.0;
	double average = 0.0;

	cout << "Enter the number of entries to calculate: " << endl;
	cin >> entries;

	for (int i = 0; i < entries; i++)
	{
		cout << "Enter value: ";
		cin >> values[i];
	}

	for (int i = 0; i < entries; i++)
	{
		sum += values[i];
	}
	average = sum / entries;


	return average;
}


double standardDeviation(double values[], int entries);

double standardDeviation(double values[], int entries)
{
	double average = calculateAverage(values, entries);
	double total = 0.0;
	double stdDev = 0.0;
	for (int i = 0; i < entries; i++)
	{
		total = pow((values[i] - average), 2);
	}

	stdDev = sqrt(total / entries);
	return stdDev;
}


int main()
{
	double a[5] = { 0 };

	double spread = standardDeviation(a, 5);

	cout << "The standard deviation is: " << spread << endl;
	return 0;
}