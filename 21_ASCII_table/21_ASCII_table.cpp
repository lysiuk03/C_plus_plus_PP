#include <iostream>
#include <iomanip>
#include<windows.h>
using namespace std;

void paint(int count, int symbol)
{
	for (int i = 0; i < count; i++)
	{
		cout << (char)symbol;
	}
}

void space(int count)
{
	cout << setw(count);
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void main()
{
	paint(1, 201);
	paint(5, 205);
	paint(1, 203);
	paint(8, 205);
	paint(1, 203);
	paint(22, 205);
	paint(1, 203);
	paint(11, 205);
	paint(1, 203);
	paint(13, 205);
	paint(1, 187);
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		paint(1, 186);
		space(6);
		paint(1, 186);
		space(9);
		paint(1, 186);
		space(23);
		paint(1, 186);
		space(12);
		paint(1, 186);
		space(14);
		paint(1, 186);
		cout << endl;
	}
	paint(1, 204);
	paint(5, 205);
	paint(1, 206);
	paint(8, 205);
	paint(1, 206);
	paint(22, 205);
	paint(1, 206);
	paint(11, 205);
	paint(1, 206);
	paint(13, 205);
	paint(1, 185);
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		paint(1, 186);
		space(6);
		paint(1, 186);
		space(9);
		paint(1, 186);
		space(23);
		paint(1, 186);
		space(12);
		paint(1, 186);
		space(14);
		paint(1, 186);
		cout << endl;
	}
	paint(1, 204);
	paint(5, 205);
	paint(1, 206);
	paint(8, 205);
	paint(1, 206);
	paint(22, 205);
	paint(1, 206);
	paint(11, 205);
	paint(1, 206);
	paint(13, 205);
	paint(1, 185);
	cout << endl;
	paint(1, 186);
	space(6);
	paint(1, 186);
	space(9);
	paint(1, 186);
	space(23);
	paint(1, 186);
	space(12);
	paint(1, 186);
	space(14);
	paint(1, 186);
	cout << endl;
	paint(1, 200);
	paint(5, 205);
	paint(1, 202);
	paint(8, 205);
	paint(1, 202);
	paint(22, 205);
	paint(1, 202);
	paint(11, 205);
	paint(1, 202);
	paint(13, 205);
	paint(1, 188);
	cout << endl;

	gotoxy(2, 2);
	cout << "No";
	gotoxy(2, 6);
	cout << "1";
	gotoxy(2, 7);
	cout << "2";
	gotoxy(2, 8);
	cout << "3";

	gotoxy(9, 2);
	cout << "Item";
	gotoxy(9, 6);
	cout << "P196";
	gotoxy(9, 7);
	cout << "P020";
	gotoxy(9, 8);
	cout << "P111";

	gotoxy(21, 2);
	cout << "Description";
	gotoxy(20, 6);
	cout << "Samsung Color TU";
	gotoxy(20, 7);
	cout << "Uniden Handset";
	gotoxy(20, 8);
	cout << "Folder Blank";

	gotoxy(41, 2);
	cout << "Quantity";
	gotoxy(44, 6);
	cout << "1";
	gotoxy(44, 7);
	cout << "1";
	gotoxy(44, 8);
	cout << "1";

	gotoxy(55, 2);
	cout << "Price";
	gotoxy(54, 6);
	cout << "$ 829.00";
	gotoxy(54, 7);
	cout << "$  29.00";
	gotoxy(54, 8);
	cout << "$  2.70";

	gotoxy(2, 20);
}