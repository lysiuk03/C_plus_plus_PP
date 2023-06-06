#include <iostream>
using namespace std;



void main()
{
	const int months = 12;
	int year[months];

	for (int i = 0; i < months; i++)
	{
		year[i] = rand() % 10000 + 5000;
	}

	cout << endl;
	int start;
	int end;
	cout << " Enter the month from which to start:";
	cin >> start;
	cout << " Enter the month to end:";
	cin >> end;
	int max;
	int maximum = year[start - 1];
	int min;
	int minimal = year[start - 1];
	for (int i = start - 1; i < end; i++)
	{
		if (maximum < year[i])
		{
			maximum = year[i];
			max = i;
		}
		if (minimal > year[i])
		{
			minimal = year[i];
			min = i;
		}
	}
	cout << " The month in which the profit was maximum: " << max + 1 << endl;
	cout << " The month in which the profit was minimal: " << min + 1 << endl;


	const int size = 10;
	int Z[size];
	for (int i = 0; i < size; i++)
	{
		Z[i] = rand() % 100 + (-50);
	}
	cout << " Z: ";
	for (int i = 0; i < size; i++)
	{
		cout << Z[i] << " ";
	}
	int negative;
	for (int i = 0; i < size; i++)
	{
		if (Z[i] < 0)
		{
			negative = Z[i];
			break;
		}
	}
	int positive;
	for (int i = size; i >= 0; i--)
	{
		if (Z[i] > 0)
		{
			positive = Z[i];
			break;
		}
	}
	cout << endl;
	cout << " Last positive number: " << positive << endl;
	cout << " First negative number: " << negative << endl;
}