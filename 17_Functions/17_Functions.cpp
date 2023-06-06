#include <iostream>
using namespace std;

int sum(int a, int b)
{
	int sum = 0;
	for (a; a <= b; a++)
	{
		sum += a;
	}
	return sum;
}

void card(char m)
{
	cout << " _______________\n";
	cout << "|               |\n";
	cout << "|               |\n";
	cout << "|               |\n";
	cout << "|               |\n";
	cout << "|               |\n";
	cout << '|' << "       " << m << "       |\n";
	cout << "|               |\n";
	cout << "|               |\n";
	cout << "|               |\n";
	cout << "|               |\n";
	cout << "|_______________|\n";
	cout << endl;
}

void main()
{
	cout << sum(2, 15) << endl;

	int number;
	cout << "1 - Heart" << endl;
	cout << "2 - Diamond" << endl;
	cout << "3 - Club" << endl;
	cout << "4 - Spade" << endl;
	cout << "Enter number: ";
	cin >> number;
	switch (number)
	{
	case 1:
		card(3);
		break;
	case 2:
		card(4);
		break;
	case 3:
		card(5);
		break;
	case 4:
		card(6);
		break;
	}
	cout << endl;


	const int row = 5;
	const int col = 5;
	int arr[row][col];

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 40 + 10;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	int temp, step, numb;

	cout << " Enter step: ";
	cin >> step;
	cout << " Where do you want to cycle?" << endl;
	cout << " 1 - left" << endl;
	cout << " 1 - right" << endl;
	cout << " 1 - up" << endl;
	cout << " 1 - down" << endl;
	cout << " Enter numb:";
	cin >> numb;
	switch (numb)
	{
	case 1:

		for (int l = 0; l < step; l++)
		{
			for (int i = 0; i < row; i++)
			{
				temp = arr[i][0];
				for (int j = 0; j < col; j++)
				{
					arr[i][j] = arr[i][j + 1];
				}
				arr[i][col - 1] = temp;
			}
		}

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}

		break;
	case 2:
		for (int r = 0; r < step; r++)
		{
			for (int i = 0; i < row; i++)
			{
				temp = arr[i][col - 1];
				for (int j = col - 1; j > 0; j--)
				{
					arr[i][j] = arr[i][j - 1];
				}
				arr[i][0] = temp;
			}
		}

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;

		break;
	case 3:
		for (int u = 0; u < step; u++)
		{
			for (int i = 0; i < col; i++)
			{
				temp = arr[0][i];
				for (int j = 0; j < row - 1; j++)
				{
					arr[j][i] = arr[j + 1][i];
				}
				arr[row - 1][i] = temp;
			}
		}

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		break;
	case 4:
		for (int d = 0; d < step; d++)
		{
			for (int i = 0; i < col; i++)
			{
				temp = arr[row - 1][i];
				for (int j = row - 1; j > 0; j--)
				{
					arr[j][i] = arr[j - 1][i];
				}
				arr[0][i] = temp;
			}
		}

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		break;
	}
}