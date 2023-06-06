#include <iostream>
using namespace std;

int lenght(char sent[])
{
	int i = 0;
	int j = 0;
	while (true)
	{
		if (sent[i] != '\0')
		{
			j++;
			i++;
		}
		else
		{
			return j;
		}
	}
}



void main()
{
	int number_a = 0;
	int number_o = 0;
	char ao[300];
	cout << " Enter the letters: ";
	cin.getline(ao, 300);
	for (int i = 0; i < strlen(ao); i++)
	{
		if (ao[i] == 'a')
		{
			number_a++;
		}
		if (ao[i] == 'o')
		{
			number_o++;
		}
	}
	if (number_a > number_o)
	{
		cout << " In string more letters a" << endl;
	}
	else if (number_o > number_a)
	{
		cout << " In string more letters o" << endl;
	}
	else if (number_a == number_o)
	{
		cout << " The number of letters is the same" << endl;
	}
	else { cout << " These letters are missing" << endl; }

	int countletter = 0;
	int countdigit = 0;
	int countspace = 0;
	char str[200];
	cout << " Enter a string: ";
	cin.getline(str, 200);

	for (int i = 0; i < strlen(str); i++)
	{
		if (isalpha(str[i]))
		{
			countletter++;
		}
	}
	for (int i = 0; i < strlen(str); i++)
	{
		if (isdigit(str[i]))
		{
			countdigit++;
		}
	}
	for (int i = 0; i < strlen(str); i++)
	{
		if (isspace(str[i]))
		{
			countspace++;
		}
	}

	cout << " Number of letters: " << countletter << endl;
	cout << " Number of numbers: " << countdigit << endl;
	cout << " Number of spaces: " << countspace << endl;

	char sentence[] = " Go OutSide";
	for (int i = 0; i < strlen(sentence); i++)
	{
		if (islower(sentence[i]))
		{
			sentence[i] = toupper(sentence[i]);
		}
		else if (isupper(sentence[i]))
		{
			sentence[i] = tolower(sentence[i]);
		}
	}
	cout << sentence << endl;

	char sent[] = "What are you doing?";
	cout << sent << endl;
	int p;
	p = lenght(sent);
	cout << p << endl;

	int count_space = 0;
	int count_vowels = 0;
	int count_consonant = 0;
	int count_punct = 0;

	char vowels[] = "AEIOUYaeiouy";
	char consonant[] = "BCDFGHJKLMNPQRSTVWXZbcdfghjklmnpqrstvwxz";
	char punct[] = "'():,!.-?;\"";

	char str_ing[200];
	cout << " Enter a string: ";
	cin.getline(str_ing, 200);

	for (int i = 0; i < strlen(str_ing); i++)
	{
		if (isspace(str_ing[i]))
		{
			count_space++;
		}
	}
	for (int i = 0; i < strlen(str_ing); i++)
	{
		for (int j = 0; j < strlen(vowels); j++)
		{
			if (str_ing[i] == vowels[j])
			{
				count_vowels++;
			}
		}
	}
	for (int i = 0; i < strlen(str_ing); i++)
	{
		for (int j = 0; j < strlen(consonant); j++)
		{
			if (str_ing[i] == consonant[j])
			{
				count_consonant++;
			}
		}
	}
	for (int i = 0; i < strlen(str_ing); i++)
	{
		for (int j = 0; j < strlen(punct); j++)
		{
			if (str_ing[i] == punct[j])
			{
				count_punct++;
			}
		}
	}

	cout << " Number of spaces: " << count_space << endl;
	cout << " Number of vowels: " << count_vowels << endl;
	cout << " Number of consonant: " << count_consonant << endl;
	cout << " Number of punctuation: " << count_punct << endl;

	char line[255];
	cout << "Enter text: ";
	cin.getline(line, 255);
	char sym;
	cout << " Enter letter to delete: ";
	cin >> sym;
	char* c = strchr(line, sym);
	while (c == nullptr)
	{
		cout << " Enter letter to delete";
		cin >> sym;
		c = strchr(line, sym);
	}
	int index = 0, i = 0;
	while (index == 0)
	{
		if (line[i] == sym)
		{
			index = i;
			break;
		}
		i++;
	}
	char* temp1 = new char[255];
	char* temp2 = new char[255];
	strncpy_s(temp1, 255, line, index);
	strcpy_s(temp2, 255, (c + 1));
	strcat_s(temp1, 255, temp2);
	cout << " You entered: " << line << endl;
	cout << " After delete: " << temp1 << endl;
	delete[]temp2;
	delete[]temp1;

}