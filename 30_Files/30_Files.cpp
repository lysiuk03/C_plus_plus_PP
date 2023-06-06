#include <iostream>
#include <fstream>
#include<string>
using namespace std;

void main()
{
	char abc[] = "abcdefghijklmnopqrstuv";
	char ABC[] = "ABCDEFGHIJKLMNOPQRSTUV";
	char temp[] = "abcdefghijklmnopqrstuv";
	char TEMP[] = "ABCDEFGHIJKLMNOPQRSTUV";

	cout << " Enter the encryption step: ";
	int k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int tempa = temp[0];
		for (int j = 0; j < 21; j++)
		{
			temp[j] = temp[j + 1];
		}
		temp[21] = tempa;
	}
	for (int i = 0; i < k; i++)
	{
		int TEMPA = TEMP[0];
		for (int j = 0; j < 21; j++)
		{
			TEMP[j] = TEMP[j + 1];
		}
		TEMP[21] = TEMPA;
	}

	cout << " Enter the word: ";
	const int size = 50;
	char word[size];
	cin >> word;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 22; j++)
		{
			if (word[i] == abc[j])
			{
				word[i] = temp[j];
				break;
			}
			if (word[i] == ABC[j])
			{
				word[i] = TEMP[j];
				break;
			}
		}

	}


	ofstream stalo;
	stalo.open("stalo.txt");
	stalo << word;
	stalo.close();

	ifstream in("stalo.txt");
	char buff[50];
	in >> buff;
	cout << buff << endl;
	in.close();


}