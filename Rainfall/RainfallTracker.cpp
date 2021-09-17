#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>

/*
* Title			: RainfallTracker.cpp
* Project		: Rainfall - Arrays
* Author		: Nelson Wong
* Description	: Write a program that reads in the average monthly rainfall of the year and then reads in the actual monthly rainfall for each of the previous 12 months. The program then prints out a nicely formatted table showing the rainfall for each of the previous 12 months as well as how much above or below average the rainfall was for each month. The average monthly rainfall is given for the months Jan, Feb, March, and so forth in order. To obtain the actual rainfall for the previous 12 months, the program first asks what the current month is and then asks for the rainfall figures for the previous 12 months. The output should correctly label the months.
*/
using namespace std;

#define MONTHS_IN_A_YEAR 12

int main()
{
	int month[MONTHS_IN_A_YEAR] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	double averageRainfall[MONTHS_IN_A_YEAR] = { 0 };
	double actualRainfall[MONTHS_IN_A_YEAR] = { 0 };
	cout << "What's the average rainfall for " << "month" << endl;
	for (int i = 0; i < MONTHS_IN_A_YEAR; i++)
	{
		monthOutput(i);
		cout << " : ";
		cin >> averageRainfall[i];
	}



	return 0;
}






void monthOutput(int month)
{
	switch (month)
	{
	case 0:
		cout << "January";
		break;
	case 1:
		cout << "February";
		break;
	case 2:
		cout << "March";
		break;
	case 3:
		cout << "April";
		break;
	case 4:
		cout << "May";
		break;
	case 5:
		cout << "June";
		break;
	case 6:
		cout << "July";
		break;
	case 7:
		cout << "August";
		break;
	case 8:
		cout << "September";
		break;
	case 9:
		cout << "October";
		break;
	case 10:
		cout << "November";
		break;
	case 11:
		cout << "December";
		break;
	}
}





double rainfallActual(double actualRainfall[], int month[MONTHS_IN_A_YEAR], int prevMonth)
{
	for (int i = 0; i < MONTHS_IN_A_YEAR; i++)
	{

	}

	return 0;
}





double averageMonthlyRainfall(double averageRainfall[], int month[MONTHS_IN_A_YEAR])
{
	for (int i = 0; i < MONTHS_IN_A_YEAR; i++)
	{
		cout << "Enter the average rainfall for the month of " << month[i] << " : ";
		cin >> averageRainfall[i];
	}
	return 1;
}