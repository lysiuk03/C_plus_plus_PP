#include <iostream>
using namespace std;


void main()
{
	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			if (a <= b)
			{
				cout << " * ";
			}
			else
			{
				cout << "   ";
			}
		}
		cout << endl;
	}
	cout << endl;



	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			if (a >= b)
			{
				cout << " * ";
			}
			else
			{
				cout << "   ";
			}
		}
		cout << endl;
	}
	cout << endl;

	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			if (a <= b && a + b <= 9)
			{
				cout << " * ";
			}
			else
			{
				cout << "   ";
			}
		}
		cout << endl;
	}
	cout << endl;

	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			if (a >= b && a + b >= 9)
			{
				cout << " * ";
			}
			else
			{
				cout << "   ";
			}
		}
		cout << endl;
	}
	cout << endl;


	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			if ((a >= b && a + b >= 9) || (a <= b && a + b <= 9))
			{
				cout << " * ";
			}
			else
			{
				cout << "   ";
			}
		}
		cout << endl;
	}
	cout << endl;

	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			if ((a >= b && a + b <= 9) || (a <= b && a + b >= 9))
			{
				cout << " * ";
			}
			else
			{
				cout << "   ";
			}
		}
		cout << endl;
	}
	cout << endl;


	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			if (a >= b && a + b <= 9)
			{
				cout << " * ";
			}
			else
			{
				cout << "   ";
			}
		}
		cout << endl;
	}
	cout << endl;



	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			if (a <= b && a + b >= 9)
			{
				cout << " * ";
			}
			else
			{
				cout << "   ";
			}
		}
		cout << endl;
	}
	cout << endl;

	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			if (a + b <= 9)
			{
				cout << " * ";
			}
			else
			{
				cout << "   ";
			}
		}
		cout << endl;
	}
	cout << endl;


	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			if (a + b >= 9)
			{
				cout << " * ";
			}
			else
			{
				cout << "   ";
			}
		}
		cout << endl;
	}
	cout << endl;
}