#include <iostream>
#include<windows.h>
using namespace std;


struct rectangles
{
	int width = 10;
	int height = 5;
	int x;
	int y;
};

void ShowRectangle(rectangles  rectangle)
{
	for (int i = 0; i < rectangle.height; i++)
	{
		for (int j = 0; j < rectangle.width; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
}

void Change(rectangles* rectangle, int h, int w)
{

	rectangle->height = h;
	rectangle->width = w;
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void ShowRectangleXY(rectangles rectangle, int x, int y)
{

	for (int i = 0; i < rectangle.height; i++)
	{
		gotoxy(x, y);
		for (int j = 0; j < rectangle.width; j++)
		{
			cout << " * ";
		}
		cout << endl;
		y++;
	}

}


struct book
{
	int id;
	char name[50];
	char author[30];
	char publishing[30];
	char genre[30];
	int year;
	int price;
};

void Show(book i)
{
	cout << "\tName : " << i.name << endl;
	cout << "\tAuthor : " << i.author << endl;
	cout << "\tPublishing : " << i.publishing << endl;
	cout << "\tGenre : " << i.genre << endl;
	cout << "\tYear of publication : " << i.year << endl;
	cout << "\tPrice : " << i.price << " grn." << endl;
}

void SearchByAuthor(book library[], char author[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(library[i].author, author) == 0)
		{
			Show(library[i]);
			cout << endl;
		}
	}
}

void SearchByName(book library[], char name[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(library[i].name, name) == 0)
		{
			Show(library[i]);
			cout << endl;
		}
	}
}

void SearchByPublishing(book library[], char publishing[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(library[i].publishing, publishing) == 0)
		{
			Show(library[i]);
			cout << endl;
		}
	}
}

void SearchByGenre(book library[], char genre[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(library[i].genre, genre) == 0)
		{
			Show(library[i]);
			cout << endl;
		}
	}
}

void ChangeData(book library[], int id, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (library[i].id == id)
		{
			Show(library[i]);
			cin.ignore();
			cout << "Enter name of book : ";
			cin.getline(library[i].name, 50);
			cout << "Enter name of author : ";
			cin.getline(library[i].author, 30);
			cout << "Enter name of publishing : ";
			cin.getline(library[i].publishing, 30);
			cout << "Enter name of genre : ";
			cin.getline(library[i].genre, 30);
			cout << "Enter year of publication : ";
			cin >> library[i].year;
			cout << "Enter price : ";
			cin >> library[i].price;
		}
	}
}





void main()
{
	rectangles rectangle;
	int h, w;
	ShowRectangle(rectangle);
	cout << " Enter height: ";
	cin >> h;
	cout << " Enter width";
	cin >> w;
	Change(&rectangle, h, w);
	ShowRectangle(rectangle);
	int x, y;
	cout << " Enter x: ";
	cin >> x;
	cout << " Enter y: ";
	cin >> y;
	ShowRectangleXY(rectangle, x, y);

	const int size = 10;

	book library[size] =
	{
		{1,"The Picture of Dorian Gray", "Oscar Wilde", "Folio","romance",1890,220},
		{2,"Reincarnation","Franz Kafka", "O.K. Publishing","novel",1915,120},
		{3,"Charlie and the chocolate factory","Roald Dahl","A-ba-ba-ha-la-ma-ha","fantasy",2009,160},
		{4,"Scandinavian mythology","Neil Gaiman","KM - BOOKS","collection of myths",2017,185},
		{5,"Flowers for Algernon","Daniel Keys","Family Leisure Club","sci-fi",1959,160},
		{6,"Cards on the table","Agatha Christie","Family Leisure Club","detective",1936,150},
		{7,"Schindler's list","Thomas Kinilli","Family Leisure Club","romance",2015,165},
		{8,"The Green Mile","Stephen King","Family Leisure Club","horror",2018,230},
		{9,"The Mystery Of The Blue Train","Agatha Christie","Family Leisure Club","detective",2015,150},
		{10,"Needful Things","Stephen King","Family Leisure Club","horror",2021,300}
	};

	int num;
	do
	{
		cout << "\t\tMenu" << endl;
		cout << "\tShow all             [1]" << endl;
		cout << "\tSeach by author      [2]" << endl;
		cout << "\tSeach by name        [3]" << endl;
		cout << "\tSeach by publishing  [4]" << endl;
		cout << "\tSeach by genre       [5]" << endl;
		cout << "\tChange data          [6]" << endl;
		cout << "\tExit                 [0]" << endl;
		cin >> num;
		cin.ignore();
		switch (num)
		{
		case 1:
			for (int i = 0; i < size; i++)
			{
				Show(library[i]);
				cout << endl;
			}
			break;
		case 2:
			cout << "Enter author of book : ";
			char author[50];
			cin.getline(author, 50);
			SearchByAuthor(library, author, size);
			break;
		case 3:
			cout << "Enter name of book: ";
			char name[50];
			cin.getline(name, 50);
			SearchByName(library, name, size);
			break;
		case 4:
			cout << "Enter publishing of book: ";
			char publishing[50];
			cin.getline(publishing, 50);
			SearchByPublishing(library, publishing, size);
			break;
		case 5:
			cout << "Enter  genre of book: ";
			char  genre[50];
			cin.getline(genre, 50);
			SearchByGenre(library, genre, size);
			break;
		case 6:
			cout << " Enter id: ";
			int id;
			cin >> id;
			ChangeData(library, id, size);
			break;
		case 0:
			cout << " Thank you! Goodbye)))" << endl;
			exit(0);
			break;
		default:
			cout << "No choise......" << endl;
			break;
		}
	} while (num != 0);


}