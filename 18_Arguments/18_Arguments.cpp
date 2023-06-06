#include <iostream>
using namespace std;

int cube(int numb)
{
	int cub;
	return cub = numb * numb * numb;
}

int max(int a, int b, int c)
{
	if (a > b && a > c)
	{
		return a;
	}
	else if (b > a && b > c)
	{
		return b;
	}
	else if (c > a && c > b)
	{
		return c;
	}
}

bool number(int num)
{
	static bool k;
	if (num < 0)
	{
		return false;
	}
	else if (num > 0)
	{
		return true;
	}
}

int main()
{
	cout << " Cube numbers: " << cube(2) << endl;
	cout << " Max number: " << max(6, 9, 3) << endl;
	cout << boolalpha << " The number is positive.  " << number(5) << endl;

}