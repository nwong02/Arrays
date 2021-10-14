/*
* Title			: Diff.cpp
* Project		: Arrays - Differences
* Author		: Nelson Wong
* Description	: From Savitch Absolute C++ 4th Ed. Display 5.1 program using array. Basic implementation of an array
*/


#include <iostream>


using namespace std;

int main()
{
	int score[6] = { 0 };

	cout << "Enter 6 scores: \n";
	cin >> score[0];
	int maximum = score[0];

	for (int i = 0; i < 6; i++)
	{
		cin >> score[i];
		if (score[i] > maximum)
		{
			maximum = score[i];
		}
	}

		cout << "The highest score is " << maximum << endl << "The scores and their differences from highest score are:\n";

		for (int i = 0; i < 6; i++)
		{
			cout << score[i] << " differs by " << (maximum - score[i]) << endl;
		}

	return 0;
}