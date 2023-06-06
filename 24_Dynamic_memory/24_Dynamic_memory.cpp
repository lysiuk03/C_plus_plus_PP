#include <iostream>
#include<conio.h>
using namespace std;

#include <iostream>
#include<conio.h>
using namespace std;

int* createarr(int size)
{
	int* arr = new int[size];
	return arr;
}

void fillarr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 25;
	}
}

void showarr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}

int* addnumber(int* arr, int* size, int number)
{
	(*size)++;
	int* temp = new int[*size];
	for (int i = 0; i < (*size) - 1; i++)
	{
		temp[i] = arr[i];
	}
	temp[*size - 1] = number;
	delete[]arr;
	arr = temp;
	return arr;
}

int* removenumber(int* arr, int* size)
{
	(*size)--;
	int* temp = new int[*size];
	for (int i = 0; i < *size; i++)
	{
		temp[i] = arr[i];
	}
	delete[]arr;
	arr = temp;
	return arr;
}

int* ADDnumber(int* arr, int* size, int number, int place)
{
	(*size)++;
	int* temp = new int[*size];
	for (int i = 0; i < place - 1; i++)
	{
		temp[i] = arr[i];
	}
	temp[place - 1] = number;
	for (int i = place; i < *size; i++)
	{
		temp[i] = arr[i - 1];
	}
	delete[]arr;
	arr = temp;
	return arr;
}

int main()
{
	int* pa = new int;
	double* pb = new double;
	long* pc = new long;
	*pa = 3;
	*pb = 5;
	*pc = 7;
	cout << " *pa= " << *pa << endl;
	cout << " *pb= " << *pb << endl;
	cout << " *pc= " << *pc << endl;
	cout << " Product of numbers: " << *pa * *pb * *pc << endl;
	delete pa;
	delete pb;
	delete pc;

	int size;
	cout << " Enter size: ";
	cin >> size;
	int* arr = createarr(size);
	fillarr(arr, size);
	showarr(arr, size);
	int number;
	int place;
	char choice = 'y';
	while (true)
	{
		cout << " Do you want to add number? y/n" << endl;
		choice = _getch();
		if (choice == 'n')break;
		cout << " Enter new number: ";
		cin >> number;
		arr = addnumber(arr, &size, number);
		system("cls");
		showarr(arr, size);
	}
	while (true)
	{
		cout << " Do you want to remove number? y/n" << endl;
		choice = _getch();
		if (choice == 'n')break;
		arr = removenumber(arr, &size);
		system("cls");
		showarr(arr, size);
	}
	while (true)
	{
		cout << " Do you want to add number? y/n" << endl;
		choice = _getch();
		if (choice == 'n')break;
		cout << " Enter new number: ";
		cin >> number;
		cout << " Enter place number: ";
		cin >> place;
		arr = ADDnumber(arr, &size, number, place);
		system("cls");
		showarr(arr, size);
	}

	delete[]arr;

}