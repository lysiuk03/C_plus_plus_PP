#include <iostream>
#include<iomanip>
using namespace std;

void init(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
	}
}

void show(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void bubblesortzrost(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] > arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void bubblesortzspad(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] < arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void bubblesort(int arr[], int size, int a)
{
	if (a == 1)
	{
		bubblesortzspad(arr, size);
	}
	else if (a == 0)
	{
		bubblesortzrost(arr, size);
	}
}

int degree(int a, int n)
{
	if (a == 1)
	{
		return a;
	}
	else if (n == 0)
	{
		return 1;
	}
	else
	{
		return a * degree(a, n - 1);
	}
}

int star(int n)
{
	if (n < 1)
	{
		return 0;
	}
	cout << "*";
	n--;
	star(n);
}

int sum(int a, int b)
{
	if (b == a - 1)
	{
		return 0;
	}
	else
	{
		return b + sum(a, b - 1);
	}
}

int main()
{
	const int size = 10;
	int arr[size];

	init(arr, size);
	show(arr, size);

	bubblesort(arr, size, 1);
	show(arr, size);

	cout << "Step: " << degree(5, 5) << endl;

	star(5);
	cout << endl;
	cout << sum(5, 30);
}
