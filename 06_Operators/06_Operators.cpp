#include <iostream>
using namespace std;

void main()
{
	double number1, number2;
	cout << " Enter two numbers: ";
	cin >> number1;
	cin >> number2;
	cout << " The sum of numbers: " << number1 + number2 << endl;
	cout << " The product of numbers: " << number1 * number2 << endl;
	double mean_2 = (number1 + number2) / 2;
	cout << " The arithmetic mean of numbers: " << mean_2 << endl;


	double numb1, numb2, numb3;
	cout << " Enter three numbers: ";
	cin >> numb1;
	cin >> numb2;
	cin >> numb3;
	cout << " The sum of numbers: " << numb1 + numb2 + numb3 << endl;
	cout << " The product of numbers: " << numb1 * numb2 * numb3 << endl;
	double mean_3 = (numb1 + numb2 + numb3) / 3;
	cout << " The arithmetic mean of numbers: " << mean_3 << endl;


	double price;
	cout << " Enter the cost of one laptop: ";
	cin >> price;
	double number;
	cout << " Enter the number: ";
	cin >> number;
	double discount;
	cout << " Enter the discount percentage: ";
	cin >> discount;
	double amount = price * number - (price * number * discount / 100);
	cout << " Total order amount: " << amount << " grn" << endl;

}