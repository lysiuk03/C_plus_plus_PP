#include <iostream>
using namespace std;
void main()
{
	int number1;
	cout << " Enter number: ";
	cin >> number1;
	if (number1 % 2 == 0)
	{
		cout << " The number is double." << endl;
	}
	else
	{
		cout << " The number is not double." << endl;
	}



	int number2;
	cout << " Enter number: ";
	cin >> number2;
	if (number2 % 2 == 1)
	{
		cout << " The number is not double." << endl;
	}
	else
	{
		cout << " The number is double." << endl;
	}



	int num1, num2;
	cout << " Enter number 1: ";
	cin >> num1;
	cout << " Enter number 2: ";
	cin >> num2;
	if (num1 > num2)
	{
		cout << " Smaller number: " << num2 << endl;
	}
	else if (num1 == num2)
	{
		cout << " The numbers are equal." << endl;
	}
	else
	{
		cout << " Smaller number: " << num1 << endl;
	}


	int num;
	cout << " Enter number: ";
	cin >> num;
	if (num > 0)
	{
		cout << " The number is positive." << endl;
	}
	else if (num < 0)
	{
		cout << " The number is negative." << endl;
	}
	else
	{
		cout << " It is zero." << endl;
	}



	int numb1, numb2;
	cout << " Enter number 1: ";
	cin >> numb1;
	cout << " Enter number 2: ";
	cin >> numb2;
	if (numb1 == numb2)
	{
		cout << " Numbers is aquale." << endl;
	}
	else if (numb1 > numb2)
	{
		cout << " " << numb2 << " " << numb1 << endl;
	}
	else
	{
		cout << " " << numb1 << " " << numb2 << endl;
	}



	int a, b, c;
	cout << " Enter the sides of the triangle:";
	cin >> a;
	cin >> b;
	cin >> c;
	int result1 = a * a + b * b;
	int result2 = c * c;

	if (a == b && b == c)
	{
		cout << " This triangle is equilateral." << endl;
	}
	else if (a == b || b == c || c == a)
	{
		cout << " This triangle is isosceles." << endl;
	}
	else if (result1 == result2)
	{
		cout << " This triangle is right-angled." << endl;
	}
	else
	{
		cout << " This triangle is arbitrary." << endl;
	}
}


