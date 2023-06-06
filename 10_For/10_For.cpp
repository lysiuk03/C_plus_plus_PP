#include <iostream>
using namespace std;

void main()
{

	int n;
	cout << " Enter number: ";
	cin >> n;
	int sum = 0;
	for (; n <= 500; n++)
	{
		sum = sum + n;
	}
	cout << " Sum of numbers: " << sum << endl;


	int x, y;
	cout << " Enter x: ";
	cin >> x;
	cout << " Enter y: ";
	cin >> y;
	int pow;
	pow = x;
	for (int i = 1; i < y; i++)
	{
		pow = pow * x;
	}
	cout << " x^y= " << pow << endl;



	int sum_3 = 0;
	for (int a = 1; a <= 1000; a++)
	{
		sum_3 = sum_3 + a;
	}
	float mean;
	mean = (float)sum_3 / 1000;
	cout << " Arifmetick mean of numbers: " << mean << endl;


	int a;
	cout << " Enter a (a<20): ";
	cin >> a;
	long long dob = 1;
	for (; a <= 20; a++)
	{
		dob = dob * a;
	}
	cout << " The product of numbers: " << dob << endl;



	cout << " Enter number: ";
	int k;
	cin >> k;
	for (int c = 1; c <= 10; c++)
	{
		cout << " " << k << " * " << c << " = " << c * k << endl;
	}
}