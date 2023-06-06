#include <iostream>
#include<Windows.h>
using namespace std;

void main()
{
	const int seiz = 3;
	int mas_1[seiz] = { 3,7,10 };
	for (int i = 0; i < seiz; i++)
	{
		cout << mas_1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < seiz; i++)
	{
		cout << " Enter number: ";
		cin >> mas_1[i];
	}
	for (int i = 0; i < seiz; i++)
	{
		cout << mas_1[i] << " ";
	}
	cout << endl;

	double mas_2[seiz] = { 0.5,2.5,3.5 };
	for (int i = 0; i < seiz; i++)
	{
		cout << mas_2[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < seiz; i++)
	{
		cout << " Enter number: ";
		cin >> mas_2[i];
	}
	for (int i = 0; i < seiz; i++)
	{
		cout << mas_2[i] << " ";
	}
	cout << endl;

	char mas_3[seiz] = { '/','*','-' };
	for (int i = 0; i < seiz; i++)
	{
		cout << mas_3[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < seiz; i++)
	{
		cout << " Enter symbol: ";
		cin >> mas_3[i];
	}
	for (int i = 0; i < seiz; i++)
	{
		cout << mas_3[i] << " ";
	}
	cout << endl;



	const int days = 31;
	int temp[days] = { 1,3,6,4,5,6,3,2,-4,-2,4,2,-5,-3,0,4,1,2,-3,6,-3,4,6,-1,2,3,4,5,3,-1,-2 };
	int sum = 0;
	int counter = 0;
	double mean;
	for (int j = 0; j < days; j++)
	{
		sum = sum + temp[j];
		if (temp[j] < 0)
		{
			counter = counter + 1;
		}
	}
	mean = (double)sum / 31;
	cout << " Average temperature: " << mean << endl;
	cout << " Times the temperature was below zero: " << counter << endl;

	int summa = 0;
	const int size_20 = 20;
	int A[size_20] = { 5,4,7,3,8,5,7,9,3,3,4,44,7,4,6,1,2,7,4,5 };
	for (int k = 0; k < size_20; k++)
	{
		summa = summa + A[k];
	}
	cout << " Summ of numbers: " << summa << endl;

	int summ20 = 0;
	const int size20 = 20;
	int B[size20] = { 5,4,14,3,8,21,7,15,3,3,4,44,7,14,6,1,2,32,4,5 };
	for (int c = 0; c < size20; c++)
	{
		if (c % 2 == 0)
			summ20 = summ20 + B[c];
	}
	cout << " Summ of numbers: " << summ20 << endl;


	const int num = 20;
	int sum_num = 0;
	int C[num] = { 2,6,-3,8,-13,6,98,-45,-7,4,3,65,78,-5,14,56,78,-4,-16,70 };
	for (int s = 0; s < num; s++)
	{
		if (C[s] > 0)
		{
			sum_num = sum_num + C[s];
		}
	}
	cout << " Summ of positive numbers: " << sum_num << endl;



	int numb;
	char symb;
	cout << " Enter symbol: ";
	cin >> symb;
	int full;
	cout << " Enter full line: ";
	cin >> full;
	cout << " 1- Horizontal line" << endl;
	cout << " 2- Vertical line" << endl;
	cout << "Choose an option : ";
	cin >> numb;
	char speed;
	cout << " q-quickly" << endl;
	cout << " n-normally" << endl;
	cout << " s-slow" << endl;
	cout << "Choose an option : ";
	cin >> speed;
	switch (numb)
	{
	case 1:
	{

		for (int x = 0; x < full; x++)
		{
			if (speed == 'q')
			{
				Sleep(10);
				cout << symb;
			}

			else if (speed == 'n')
			{
				Sleep(500);
				cout << symb;
			}

			else if (speed == 's')
			{
				Sleep(2000);
				cout << symb;
			}


		}
	}break;
	case 2:
	{
		for (int y = 0; y < full; y++)
		{
			if (speed == 'q')
			{
				Sleep(10);
				cout << symb << endl;
			}

			else if (speed == 'n')
			{
				Sleep(500);
				cout << symb << endl;;
			}

			else if (speed == 's')
			{
				Sleep(2000);
				cout << symb << endl;
			}
		}

	}break;
	}


}