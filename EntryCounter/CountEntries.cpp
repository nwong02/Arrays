/*
* Title			: CountEntries.cpp
* Project		: Arrays - Entry Counter
* Author		: Nelson Wong
* Description	: From Savitch Absolute C++ 4th Ed. Chapter 5. Write a program that reads in an array of type int. You may assume that there are fewer than 50 entries in the array. Your program determines how many entries are used and the output is to be a two-column list. The first column is a list of distinct array elements, the second column is a count of the number of occurrences of each element. The list should be sorted on entries in the first column largest to smallest
*/


#include <iostream>
#include <iomanip>


using namespace std;


int values(int entries[], int numberOfEntries)
{
	cout << "Enter the number of entries desired: ";
	cin >> numberOfEntries;

	if (numberOfEntries >= 50)
	{
		numberOfEntries == 50;
		cout << "Sorry, I can only accept a maximum of 50 entries right now! =(" << endl;
	}

	do
	{
		
	} while (numberOfEntries <= 50);
}

int main()
{
	return 1;

}