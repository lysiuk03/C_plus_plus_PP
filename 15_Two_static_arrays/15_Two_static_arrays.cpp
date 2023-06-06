#include<iostream>
#include<iomanip>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	int n = 10, num;
	const int row = 10;
	const int col = 10;
	int arr[row][col];

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 100;//
			cout << setw(4) << arr[i][j] << " ";
		}
		cout << endl;
	}
	int max;
	do
	{
		cout << "Виберiть фiгуру:\nA - 1 \nБ - 2 \nВ - 3 \nГ - 4 \nД - 5 \nЕ - 6 \nЖ - 7 \nЗ - 8 \nИ - 9 \nК - 10\nВихiд - 0" << endl << endl;
		cout << "Номер - ";
		cin >> num;
		cout << endl;
		switch (num)
		{
		case 1:
			max = arr[0][0];
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i == j || j > i)
					{
						cout << setw(4) << arr[i][j];
						if (arr[i][j] > max)
						{
							max = arr[i][j];
						}
					}
					else
					{
						cout << "    ";
					}
				}
				cout << endl;
			}
			cout << endl;
			cout << "Max = " << max << endl;
			break;

		case 2:
			max = arr[0][0];
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i > j)
					{
						cout << setw(4) << arr[i][j];
						if (arr[i][j] > max)
						{
							max = arr[i][j];
						}
					}
					else
					{
						cout << "    ";
					}
				}
				cout << endl;
			}
			cout << endl;
			cout << "Max = " << max << endl;
			break;

		case 3:
			max = arr[0][0];
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i <= j && i + j <= n - 1)
					{
						cout << setw(4) << arr[i][j];
						if (arr[i][j] > max)
						{
							max = arr[i][j];
						}
					}
					else
					{
						cout << "    ";
					}
				}
				cout << endl;
			}
			cout << endl;
			cout << "Max = " << max << endl;
			break;

		case 4:
			max = arr[0][0];
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i >= j && i + j >= n - 1)
					{
						cout << setw(4) << arr[i][j];
						if (arr[i][j] > max)
						{
							max = arr[i][j];
						}
					}
					else
					{
						cout << "    ";
					}
				}
				cout << endl;
			}
			cout << endl;
			cout << "Max = " << max << endl;
			break;
		case 5:
			max = arr[0][0];
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i <= j && i + j <= n - 1)
					{
						cout << setw(4) << arr[i][j];
						if (arr[i][j] > max)
						{
							max = arr[i][j];
						}
					}
					else if (i >= j && i + j >= n - 1)
					{
						cout << setw(4) << arr[i][j];
						if (arr[i][j] > max)
						{
							max = arr[i][j];
						}
					}
					else
					{
						cout << "    ";
					}
				}
				cout << endl;
			}
			cout << endl;
			cout << "Max = " << max << endl;
			break;


		case 6:
			max = arr[0][0];
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i >= j && i + j <= n - 1)
					{
						cout << setw(4) << arr[i][j];
						if (arr[i][j] > max)
						{
							max = arr[i][j];
						}
					}
					else if (i <= j && i + j >= n - 1)
					{
						cout << setw(4) << arr[i][j];
						if (arr[i][j] > max)
						{
							max = arr[i][j];
						}
					}
					else
					{
						cout << "    ";
					}
				}
				cout << endl;
			}
			cout << endl;
			cout << "Max = " << max << endl;
			break;


		case 7:
			max = arr[0][0];
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i >= j && i + j <= n - 1)
					{
						cout << setw(4) << arr[i][j];
						if (arr[i][j] > max)
						{
							max = arr[i][j];
						}
					}
					else
					{
						cout << "    ";
					}
				}
				cout << endl;
			}
			cout << endl;
			cout << "Max = " << max << endl;
			break;

		case 8:
			max = arr[0][0];
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i <= j && i + j >= n - 1)
					{
						cout << setw(4) << arr[i][j];
						if (arr[i][j] > max)
						{
							max = arr[i][j];
						}
					}
					else
					{
						cout << "    ";
					}
				}
				cout << endl;
			}
			cout << endl;
			cout << "Max = " << max << endl;
			break;

		case 9:
			max = arr[0][0];
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i + j <= n - 1)
					{
						cout << setw(4) << arr[i][j];
						if (arr[i][j] > max)
						{
							max = arr[i][j];
						}
					}
					else
					{
						cout << "    ";
					}
				}
				cout << endl;
			}
			cout << endl;
			cout << "Max = " << max << endl;
			break;

		case 10:
			max = arr[0][0];
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i + j >= n - 1)
					{
						cout << setw(4) << arr[i][j];
						if (arr[i][j] > max)
						{
							max = arr[i][j];
						}
					}
					else
					{
						cout << "    ";
					}
				}
				cout << endl;
			}
			cout << endl;
			cout << "Max = " << max << endl;
			break;

		case (0):
			break;

		default:
			cout << "Помилка введення!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			break;

		}
	} while (num != 0);
}