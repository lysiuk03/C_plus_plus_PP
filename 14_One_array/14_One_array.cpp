#include <iostream>
using namespace std;

void main()
{
	const int size = 10;
	int A[size];
	int B[size];
	const int Size = 20;
	int X[Size];

	for (int i = 0; i < size; i++)
	{
		A[i] = rand() % 50;
		B[i] = rand() % 50;
	}
	cout << " A: ";
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	cout << " B: ";
	for (int i = 0; i < size; i++)
	{
		cout << B[i] << " ";
	}


	int a = 0;
	int b = 0;
	for (int i = 0; i < Size; i++)
	{
		if (i % 2 == 0)
		{
			X[i] = A[a];
			a++;
		}
		else
		{
			X[i] = B[b];
			b++;
		}


	}
	cout << endl;
	cout << " X: ";
	for (int i = 0; i < Size; i++)
	{
		cout << X[i] << " ";
	}


	int t = 0;
	for (int i = 0; i < Size; i++)
	{
		if (i < 10)
		{
			X[i] = A[i];
		}
		else
		{
			X[i] = B[t];
			t++;
		}


	}
	cout << endl;
	cout << " X: ";
	for (int i = 0; i < Size; i++)
	{
		cout << X[i] << " ";
	}



}