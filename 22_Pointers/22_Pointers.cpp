#include <iostream>
using namespace std;

void main()
{
	double a = 3;
	double* pa = &a;
	double b = 5;
	double* pb = &b;
	double c = 7;
	double* pc = &c;

	cout << " The product of numbers: " << *pa * *pb * *pc << endl;
	cout << " Arithmetic mean of numbers: " << (*pa + *pb + *pc) / 3 << endl;

	if (*pa < *pb && *pa < *pc)
	{
		cout << " The smalest number: " << *pa;
	}
	else if (*pb < *pa && *pb < *pc)
	{
		cout << " The smalest number: " << *pb;
	}
	else if (*pc < *pa && *pc < *pb)
	{
		cout << " The smalest number: " << *pa;
	}
}