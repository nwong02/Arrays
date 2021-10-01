/*
* Title			: CountEntries.cpp
* Project		: Arrays - Entry Counter
* Author		: Nelson Wong
* Description	: From Savitch Absolute C++ 4th Ed. Chapter 5. Write a program that reads in an array of type int. You may assume that there are fewer than 50 entries in the array. Your program determines how many entries are used and the output is to be a two-column list. The first column is a list of distinct array elements, the second column is a count of the number of occurrences of each element. The list should be sorted on entries in the first column largest to smallest
*/


#include <iostream>
#include <iomanip>


using namespace std;


int values(int entries[], int numberOfEntries);

int values(int entries[], int numberOfEntries)
{
	cout << "Enter the number of entries desired: ";
	cin >> numberOfEntries;

	if (numberOfEntries >= 50)
	{
		numberOfEntries = 50;
		cout << "Sorry, I can only accept a maximum of 50 entries right now! =(" << endl;
	}

	do
	{
		for (int i = 0; i < numberOfEntries; i++)
		{
			cout << "Enter a value for the array";
			cin >> entries[i];
			cout << entries[i];
		}
	} while (numberOfEntries <= 50);
	
	
	return 0;
}





void sorted(int entries[], int numberOfEntries);

void sorted(int entries[], int numberOfEntries)
{
	for (int i = 0; i < numberOfEntries; i++)
	{
		for (int j = i + 1; j < numberOfEntries; j++)
		{
			if (entries[i] < entries[j])
			{
				int tempHolder = entries[i];
				entries[i] = entries[j];
				entries[j] = tempHolder;
			}
		}
	}

	for (int i = 0; i < numberOfEntries; i++)
	{
		cout << entries[i] << endl;
	}
}



int counter(int entries[], int numberOfEntries)
{
	int entryCount[] = { 0 };
	for (int i = 0; i < numberOfEntries; i++)
	{
		int counter = 1;
		entryCount[i] = 0;
		for (int j = i + 1; j < numberOfEntries; j++)
		{
			if (entries[i] == entries[j])
			{
				counter += 1;
				entryCount[j] = 2;
			}
		}
		cout << "The number " << entries[i] << " occurs " << counter << " times" << endl;
	}
	return 0;
}




int main()
{
	int a[20] = { 5, 23, 1, 56, 20, 12, 9, 8, 8 };
	//sorted(a, 20);
	counter(a, 20);
	return 1;
}