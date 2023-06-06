#include <iostream>
using namespace std;

void initarr(int** arr, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 20 + 10;
		}
	}
}

void showarr(int** arr, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void fill(int* arr, int col)
{
	for (int i = 0; i < col; i++)
	{
		arr[i] = rand() % 30 + 10;
	}
}

int** addrowend(int** arr, int& row, int col)
{
	int** temp = new int* [row + 1];
	for (int i = 0; i < row; i++)
	{
		temp[i] = arr[i];
	}
	temp[row] = new int[col];
	fill(temp[row], col);
	delete[]arr;
	row++;
	return temp;
}

int** addrowbegin(int** arr, int& row, int col)
{
	int** temp = new int* [row + 1];
	temp[0] = new int[col];
	fill(temp[0], col);
	for (int i = 1; i < row + 1; i++)
	{
		temp[i] = arr[i - 1];
	}
	delete[]arr;
	row++;
	return temp;
}

int** addrowpos(int** arr, int& row, int col, int pos)
{
	int** temp = new int* [row + 1];


	for (int i = 0; i < row + 1; i++)
	{

		if (i > pos - 1)
		{
			temp[i] = arr[i - 1];
		}
		else
		{
			temp[i] = arr[i];
		}
	}
	temp[pos - 1] = new int[col];
	fill(temp[pos - 1], col);

	delete[]arr;
	row++;
	return temp;
}

int** deleterowpos(int** arr, int& row, int col, int pos)
{
	int** temp = new int* [row - 1];
	delete[]arr[pos - 1];
	for (int i = 0; i < row - 1; i++)
	{
		if (i >= pos - 1)
		{
			temp[i] = arr[i + 1];
		}
		else
		{
			temp[i] = arr[i];
		}
	}

	delete[]arr;
	row--;
	return temp;
}

void main()
{
	int row = 4;
	int col = 5;
	cout << " Enter count row: ";
	cin >> row;
	cout << " Enter count col: ";
	cin >> col;

	int** arr = new int* [row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[col];
	}
	initarr(arr, row, col);
	showarr(arr, row, col);
	cout << endl;

	arr = addrowend(arr, row, col);
	showarr(arr, row, col);
	cout << endl;
	arr = addrowbegin(arr, row, col);
	showarr(arr, row, col);
	cout << endl;

	int pos;
	cout << " Enter numper of position: ";
	cin >> pos;
	arr = addrowpos(arr, row, col, pos);
	showarr(arr, row, col);
	cout << endl;

	cout << " Enter numper of position: ";
	cin >> pos;
	arr = deleterowpos(arr, row, col, pos);
	showarr(arr, row, col);
	cout << endl;


	for (int i = 0; i < row; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
}