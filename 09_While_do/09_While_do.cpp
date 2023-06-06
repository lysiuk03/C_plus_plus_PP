#include <iostream>
using namespace std;
void main()
{
	int numb = 0;
	while (numb < 100)
	{
		++numb;
		cout << numb << " ";
	}
	cout << endl << endl;

	int num = 0;
	while (num < 200)
	{
		num = num + 2;
		cout << num << " ";
	}
	cout << endl << endl;



	cout << " Emter the number of numbers: ";
	int n;
	cin >> n;
	int numbers_n;
	int res = 0;
	while (n > 0)
	{
		--n;
		cout << " Enter number: ";
		cin >> numbers_n;
		if (numbers_n % 2 == 0)
		{
			res = res + numbers_n;
		}
	}
	cout << " Sum of even numbers: " << res << endl << endl;


	int numbers_i;
	int i = 10;
	int sum = 0;
	while (i > 0)
	{
		--i;
		cout << " Enter number: ";
		cin >> numbers_i;
		sum = sum + numbers_i;
	}
	cout << " Sum of numbers: " << sum << endl;
	cout << " Arithmetic mean of numbers: " << (float)sum / 10 << endl << endl;

	int numbers = 100;
	do
	{
		cout << numbers << " ";
		--numbers;
	} while (numbers > 0);
	cout << endl << endl;


	int sum_m = 0;
	int m = 7;
	int numbers_m;
	do
	{
		cout << " Enter number: ";
		cin >> numbers_m;
		--m;
		sum_m = sum_m + numbers_m;

	} while (m > 0);
	cout << " Sum of numbers: " << sum_m << endl << endl;


	int numbers_ = 14;
	while (numbers_ <= 123)
	{
		cout << numbers_ << " ";
		++numbers_;
	}
	cout << endl << endl;

	int num_1 = 0;
	while (num_1 < 100)
	{
		num_1++;
		if (num_1 % 2 == 1)
		{
			cout << num_1 << " ";
		}
	}
	cout << endl << endl;


	cout << " Emter the number of numbers: ";
	int c;
	cin >> c;
	int numbers_c;
	int amount = 0;
	while (c > 0)
	{
		--c;
		cout << " Enter number: ";
		cin >> numbers_c;
		if (numbers_c < 0)
		{
			amount++;
		}
	}
	cout << " The number of negative numbers: " << amount << endl << endl;


	int k = 8;
	int numbers_k;
	int sum_k = 0;
	int product = 1;
	while (k > 0)

	{
		--k;
		cout << " Enter number: ";
		cin >> numbers_k;
		sum_k = sum_k + numbers_k;
		product = product * numbers_k;
	}
	cout << " Arithmetic mean of numbers: " << (float)sum_k / 8 << endl;
	cout << " Product of numbers: " << product << endl << endl;


	int j = 5;
	int numbers_j;
	int product_j = 1;
	do
	{
		--j;
		cout << " Enter number: ";
		cin >> numbers_j;
		product_j = product_j * numbers_j;
	} while (j > 0);
	cout << "Product of numbers: " << product_j << endl;
}