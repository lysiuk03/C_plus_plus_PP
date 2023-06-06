#include <iostream>
using namespace std;

int* min(int* a, int* b)
{
	if (*a > *b)
	{
		cout << " Min= " << *b << endl;
		*b = *b + 10;
		return b;
	}
	else
	{
		cout << " Min = " << *a << endl;
		*a = *a + 10;
		return a;
	}
}

void swap(int* c, int* d)
{
	cout << " c= " << *c << "  d= " << *d << endl;
	int temp;
	temp = *c;
	*c = *d;
	*d = temp;
	cout << " c= " << *c << "  d= " << *d << endl;
}

void FillArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 30;
	}
}

void ShowArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
}

void converse(int* arr, int size)
{

	int right = size - 1;
	int left = 1;

	for (int j = 0; j < size; j++)
	{
		for (int i = left; i <= right; i++)
		{
			swap(*(arr + i - 1), *(arr + i));
		}
		right--;
		for (int i = right; i >= left; i--)
		{
			swap(*(arr + i - 1), *(arr + i));
		}
		left++;
	}
}

void change(int* arr, int size)
{

	for (int i = 1; i < size; i = i + 2)
	{
		swap(*(arr + i - 1), *(arr + i));
	}

}

int main()
{
	int a = 10, b = 50;
	min(&a, &b);

	int c = 5, d = 7;
	swap(&c, &d);

	srand(time(0));
	const int size = 10;
	int arr[size];
	FillArr(arr, size);
	ShowArr(arr, size);
	cout << endl;

	converse(arr, size);
	ShowArr(arr, size);
	cout << endl;

	change(arr, size);
	ShowArr(arr, size);
}