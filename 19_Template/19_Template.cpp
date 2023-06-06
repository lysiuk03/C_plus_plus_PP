#include <iostream>
#include<iomanip>
using namespace std;

template<typename T>
void init(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
	}
}

template<typename T>
void show(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<typename T>
T max(T arr[], int size)
{
	T max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

template<typename T>
void Init(T Arr[][10], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Arr[i][j] = rand() % 100;
		}
	}
}

template<typename T>
void Show(T Arr[][10], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << setw(4) << Arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

template<typename T>
T Max(T Arr[][10], int row, int col)
{
	T Max = Arr[0][0];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (Arr[i][j] > Max)
			{
				Max = Arr[i][j];
			}
		}
	}
	return Max;
}

template<typename T>
T mean(T arr[], int size)
{
	T sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}
	T mean = sum / size;
	return mean;
}

int main()
{
	const int size = 10;
	const int row = 10;
	const int col = 10;

	int arr[size];
	int Arr[row][col];

	init(arr, size);
	show(arr, size);
	cout << " Max: " << max(arr, size) << endl;

	Init(Arr, row, col);
	Show(Arr, row, col);
	cout << " Max: " << Max(Arr, row, col) << endl;

	cout << " Arichmeatick mean of mass: " << mean(arr, size) << endl;
}