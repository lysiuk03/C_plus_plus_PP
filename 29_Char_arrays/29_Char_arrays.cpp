#include <iostream>
using namespace std;

void fillarr(char months[12][120])
{
	for (int i = 0; i < 12; i++)
	{
		cout << " Enter months " << i + 1 << " :";
		gets_s(months[i]);
	}
}

void showarr(char months[12][120])
{
	for (int i = 0; i < 12; i++)
	{
		cout << months[i] << endl;
	}
}

void Fill(char** score, int row)
{
	for (int i = 0; i < row; i++)
	{
		cout << "Enter the product " << i + 1 << " : ";
		cin >> score[i];
	}
}

void Show(char** score, int row)
{

	for (int i = 0; i < row; i++)
	{
		cout << " " << i + 1 << " product: ";
		cout << score[i] << endl;
	}

}

void Fill(char* temp)
{
	cout << "Enter new product : ";
	cin >> temp;
}

void AddProduct(char**& score, int& row)
{
	char** temp = new char* [row + 1];
	for (int i = 0; i < row; i++)
	{
		temp[i] = score[i];
	}
	temp[row] = new char[250];
	Fill(temp[row]);
	row++;
	delete[]score;
	score = temp;

}

void DelProduct(char**& score, int& row, int pos)
{
	char** temp = new char* [row - 1];
	for (int i = 0; i < pos; i++)
	{
		temp[i] = score[i];
	}
	delete[]score[pos - 1];
	for (int i = pos - 1; i < row - 1; i++)
	{
		temp[i] = score[i + 1];
	}
	delete[]score;
	row--;
	score = temp;
}
void Del(char** score, int row)
{
	for (int i = 0; i < row; i++)
	{
		delete[]score[i];

	}
	delete[]score;
}

void initarr(int** arr, int ROW, int COL)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % 20 + 10;
		}
	}
}

void showarr(int** arr, int ROW, int COL)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int** addcol(int** arr, int ROW, int& COL, int pos)
{
	int** temp = new int* [ROW];
	for (int i = 0; i < ROW; i++)
	{
		temp[i] = new int[COL + 1];
	}
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL + 1; j++)
		{
			if (j > pos - 1)
			{
				temp[i][j] = arr[i][j - 1];
			}
			else if (j < pos - 1)
			{
				temp[i][j] = arr[i][j];
			}
		}
	}
	for (int i = 0; i < ROW; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
	arr = temp;
	for (int i = 0; i < ROW; i++)
	{
		arr[i][pos - 1] = 7;
	}
	COL++;
	return arr;
}


void main()
{

	char months[12][120];
	fillarr(months);
	showarr(months);
	cout << " [1] If you want to see the name of the month;" << endl;
	cout << " [2] If you want to see the name of the season;" << endl;
	int y;
	cout << " Your choice: ";
	cin >> y;
	int x;
	cout << " Enter number of month: ";
	cin >> x;
	switch (y)
	{
	case 1:
		cout << " It's " << months[x - 1] << endl;
		break;
	case 2:
		if (x == 1 || x == 2 || x == 12)
		{
			cout << " It's Winter." << endl;
		}
		if (x == 2 || x == 4 || x == 5)
		{
			cout << " It's Spring." << endl;
		}
		if (x == 6 || x == 7 || x == 8)
		{
			cout << " It's Summer." << endl;
		}
		if (x == 9 || x == 10 || x == 11)
		{
			cout << " It's Autumn." << endl;
		}
	default:
		cout << "No choise......" << endl;
		break;
	}

	int row = 5;
	char** score = new char* [row];
	for (int i = 0; i < row; i++)
	{
		score[i] = new char[250];
	}
	Fill(score, row);

	cout << "\t\tMenu" << endl;
	cout << "\t[1] Show all positions;" << endl;
	cout << "\t[2] Show one position by number;" << endl;
	cout << "\t[3] Add a new position at the end;" << endl;
	cout << "\t[4] Delete position by number" << endl;
	cout << "\t[5] Edit position by number;" << endl;
	int number;
	cout << " Your choice: ";
	cin >> number;

	switch (number)
	{
	case 1:
		Show(score, row);
		break;
	case 2:
		int p;
		cout << " Enter the position number: ";
		cin >> p;
		cout << " It's " << score[p - 1];
		break;
	case 3:
		AddProduct(score, row);
		Show(score, row);
		break;
	case 4:
		int pos;
		cout << " Enter number position: ";
		cin >> pos;
		DelProduct(score, row, pos);
		Show(score, row);
		break;
	case 5:
		int k;
		cout << " Enter number position: ";
		cin >> k;
		cout << " Enrer product: ";
		cin >> score[k - 1];
		Show(score, row);
		break;
	dedault:
		cout << "No choise......" << endl;
		break;
	}
	Del(score, row);


	int ROW = 5;
	int COL = 5;
	cout << " Enter count row: ";
	cin >> ROW;
	cout << " Enter count col: ";
	cin >> COL;
	int** arr = new int* [ROW];
	for (int i = 0; i < ROW; i++)
	{
		arr[i] = new int[COL];
	}
	initarr(arr, row, COL);
	showarr(arr, row, COL);
	cout << endl;
	int pos;
	cout << " Enter number position: ";
	cin >> pos;
	cout << endl;
	arr = addcol(arr, ROW, COL, pos);
	showarr(arr, ROW, COL);

	for (int i = 0; i < ROW; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;

}