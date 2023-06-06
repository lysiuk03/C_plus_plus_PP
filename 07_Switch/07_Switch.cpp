#include <iostream>
using namespace std;

void main()
{
	cout << " Enter five marks: ";
	double mark1, mark2, mark3, mark4, mark5;
	cin >> mark1;
	cin >> mark2;
	cin >> mark3;
	cin >> mark4;
	cin >> mark5;
	double marks = (mark1 + mark2 + mark3 + mark4 + mark5) / 5;
	if (marks >= 4 && marks <= 5)
	{
		cout << " The student is admitted to the exam." << endl;
	}
	else if (marks < 4 && marks>0)
	{
		cout << " The student is not admitted to the exam." << endl;
	}
	else
	{
		cout << " Incorrect data." << endl;
	}



	cout << " Enter number: ";
	int number;
	float res;
	cin >> number;
	if (number % 2 == 0)
	{
		res = number * 3;
		cout << " " << res << endl;
	}
	else
	{
		res = (float)number / 2;
		cout << " " << res << endl;
	}



	double const inch_sm = 2.54;
	int key;
	double inch, sm;
	cout << " Enter 1 if you want to convert inches to centimeters." << endl;
	cout << " Enter 2 if you want to convert centimeters to inches." << endl;
	cout << " Enter number: ";
	cin >> key;
	switch (key)
	{
	case 1:
		cout << " Enter inches: ";
		cin >> inch;
		sm = inch * inch_sm;
		cout << " " << inch << " inches = " << sm << " centimeters" << endl;
		break;
	case 2:
		cout << " Enter centimeters: ";
		cin >> sm;
		inch = sm / inch_sm;
		cout << " " << sm << " centimeters = " << inch << " inches" << endl;
		break;
	default:
		cout << " Incorrect data." << endl;
		break;
	}


	const int guarant = 200;
	int sales_level_1, sales_level_2, sales_level_3;
	int salary1, salary2, salary3;
	cout << " Enter the sales level of the first manager: ";
	cin >> sales_level_1;
	cout << " Enter the sales level of the second manager: ";
	cin >> sales_level_2;
	cout << " Enter the sales level of the third manager: ";
	cin >> sales_level_3;

	if (sales_level_1 > 1000)
	{
		salary1 = guarant + (sales_level_1 * 8 / 100);
		cout << " Salary of the first manager: " << salary1 << endl;
	}
	else if (sales_level_1 <= 1000 && sales_level_1 >= 500)
	{
		salary1 = guarant + (sales_level_1 * 5 / 100);
		cout << " Salary of the first manager: " << salary1 << endl;
	}
	else if (sales_level_1 < 500)
	{
		salary1 = guarant + (sales_level_1 * 3 / 100);
		cout << " Salary of the first manager: " << salary1 << endl;
	}

	if (sales_level_2 > 1000)
	{
		salary2 = guarant + (sales_level_2 * 8 / 100);
		cout << " Salary of the second manager: " << salary2 << endl;
	}
	else if (sales_level_2 <= 1000 && sales_level_2 >= 500)
	{
		salary2 = guarant + (sales_level_2 * 5 / 100);
		cout << " Salary of the second manager: " << salary2 << endl;
	}
	else if (sales_level_2 < 500)
	{
		salary2 = guarant + (sales_level_2 * 3 / 100);
		cout << " Salary of the second manager: " << salary2 << endl;
	}


	if (sales_level_3 > 1000)
	{
		salary3 = guarant + (sales_level_3 * 8 / 100);
		cout << " Salary of the third manager: " << salary3 << endl;
	}
	else if (sales_level_3 <= 1000 && sales_level_3 >= 500)
	{
		salary3 = guarant + (sales_level_3 * 5 / 100);
		cout << " Salary of the third manager: " << salary3 << endl;
	}
	else if (sales_level_3 < 500)
	{
		salary3 = guarant + (sales_level_3 * 3 / 100);
		cout << " Salary of the third manager: " << salary3 << endl;
	}


	if (salary1 > salary2 && salary1 > salary3)
	{
		cout << " The first was the best manager, so he receives an award." << endl;
		salary1 = salary1 + 200;
	}
	else if (salary2 > salary1 && salary2 > salary3)
	{
		cout << " The best manager was the second, so he receives an award." << endl;
		salary2 = salary2 + 200;
	}
	else if (salary3 > salary1 && salary3 > salary2)
	{
		cout << " The best manager was the third, so he receives an award." << endl;
		salary3 = salary3 + 200;
	}

	cout << "SO" << endl;
	cout << " Salary of the first manager: " << salary1 << endl;
	cout << " Salary of the second manager: " << salary2 << endl;
	cout << " Salary of the third manager: " << salary3 << endl;
}