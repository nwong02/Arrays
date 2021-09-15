#include <iostream>
using namespace std;

int main()
{
	int i, temp[10];
	for (i = 0; i < 10; i++)
	{
		temp[i] = 2 * i;
	}
	for (i = 0; i < 10; i++)
	{
		cout << temp[i] << " ";
	}
	cout << endl;
	for (i = 0; i < 10; i = i + 2)
	{
		cout << temp[i] << " ";
	}
	return 0;
}