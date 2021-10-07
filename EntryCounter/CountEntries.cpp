/*
* Title			: CountEntries.cpp
* Project		: Arrays - Entry Counter
* Author		: Nelson Wong
* Description	: From Savitch Absolute C++ 4th Ed. Chapter 5. Write a program that reads in an array of type int. You may assume that there are fewer than 50 entries in the array. Your program determines how many entries are used and the output is to be a two-column list. The first column is a list of distinct array elements, the second column is a count of the number of occurrences of each element. The list should be sorted on entries in the first column largest to smallest
*/


#include <iostream>
#include <iomanip>
#include <vector>


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



//int counter(int entries[], int numberOfEntries)
//{
//	int count = 1;
//	int holder[] = { 0 };
//	for (int i = 1; i < numberOfEntries; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (entries[i] == entries[j])
//			{
//				break;
//			}
//
//			if (i == j)
//			{
//				count++;
//			}
//		}
//		cout << "The count of " << i << " is " << count << endl;
//	}
//	return count;
//}

int counter(int entries[], int &numberOfEntries) 
{	
	int count = 1;
	const int total = numberOfEntries;
	int tracker[] = { 0 };

	for (int i = 0; i < total; i++)
	{
		tracker[i] = 0;
	}

	for (int i = 0; i < total; i++) {
		if (tracker[i] == 0) 
		{
			for (int j = i; j < total; j++)
				if (entries[j] == entries[i]) 
				{
					count += 1;
					tracker[j] = 1;
				}
			cout << entries[i] << " occurs " << count << " times" << endl;
		}
	}

	return 0;
}





int main()
{
	int a[20] = { 5, 23, 1, 56, 20, 12, 9, 8, 8 };
	sorted(a, 20);

	
	return 1;
}
