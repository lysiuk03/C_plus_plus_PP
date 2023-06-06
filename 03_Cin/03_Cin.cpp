#include <iostream>
using namespace std;

void main()
{
	double numb_1, numb_2, numb_3;
	cout << "\n Enter the first number: ";
	cin >> numb_1;
	cout << " Enter the second number: ";
	cin >> numb_2;
	cout << " Enter the third number : ";
	cin >> numb_3;
	cout << " Entered numbers: " << numb_1 << ", " << numb_2 << ", " << numb_3 << "." << endl;
	double sum = numb_1 + numb_2 + numb_3;
	cout << " The sum of numbers: " << sum << endl;

	double numb1, numb2;
	cout << "\n Enter the first number: ";
	cin >> numb1;
	cout << " Enter the second number: ";
	cin >> numb2;
	cout << " Entered numbers: " << numb1 << ", " << numb2 << "." << endl;
	double mean = (numb1 + numb2) / 2;
	cout << " The arithmetic mean of numbers: " << mean << endl;


	int km;
	cout << "\n Enter kilometers: ";
	cin >> km;
	const int m = 1000;
	int meters = km * m;
	cout << " " << km << " kilometers= " << meters << " meters" << endl;

	int number;
	cout << "\n Enter the number: ";
	cin >> number;
	int square = number * number;
	cout << " Square numbers : " << square << endl;

	int days;
	cout << "\n Enter the number of days: ";
	cin >> days;
	const  int min_day = 1440;
	int minutes = days * min_day;
	cout << " " << days << " days= " << minutes << " minutes" << endl;

	const int price_prod_1 = 50;
	const int price_prod_2 = 30;
	const int price_prod_3 = 25;
	const int price_prod_4 = 15;
	int n1, n2, n3, n4;
	cout << " \n Enter the quantity of the first product : ";
	cin >> n1;
	cout << " Enter the quantity of the second product: ";
	cin >> n2;
	cout << " Enter the quantity of the third product: ";
	cin >> n3;
	cout << " Enter the quantity of the fourth product: ";
	cin >> n4;
	int cost_of_buying = price_prod_1 * n1 + price_prod_2 * n2 + price_prod_3 * n3 + price_prod_4 * n4;
	cout << " The cost of buying: " << cost_of_buying << " grn." << endl;
}