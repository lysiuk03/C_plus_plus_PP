#include <iostream>
using namespace std;


void main()
{
	enum colors { Red = 1, Orange = 2, Yellow = 3, Green = 4, Azure = 5, Blue = 6, Violet = 7 };
	int color;
	cout << " Enter number of colors: ";
	cin >> color;
	switch (color)
	{
	case Red:
		cout << " Red" << endl;
		break;
	case Orange:
		cout << " Orange" << endl;
		break;
	case Yellow:
		cout << " Yellow" << endl;
		break;
	case Green:
		cout << " Green" << endl;
		break;
	case Azure:
		cout << " Azure" << endl;
		break;
	case Blue:
		cout << " Blue" << endl;
		break;
	case Violet:
		cout << " Violet" << endl;
		break;
	default:
		cout << " Incorect data." << endl;
	}


	enum levels { Parking = -1, Supermarket = 1, HardwareStores, Boutiques, SportSpa, ClubRestaurantBar };
	int level;
	cout << " We offer a virtual elevator ride through the mall." << endl;
	cout << " Enter the floor number: ";
	cin >> level;
	switch (level)
	{
	case Parking:
		cout << " You arrived on the -1 floor. Here you can park your car. " << endl;
		break;
	case Supermarket:
		cout << " You have arrived on the 1st floor. Here you can buy fresh produce." << endl;
		break;
	case HardwareStores:
		cout << " You arrived on the 2nd floor. Here you can buy quality household goods." << endl;
		break;
	case Boutiques:
		cout << " You arrived on the 3rd floor. Here you can buy quality and fashionable clothes." << endl;
		break;
	case SportSpa:
		cout << " You arrived on the 4th floor. Here you can do a productive sports workout and relax in the spa." << endl;
		break;
	case ClubRestaurantBar:
		cout << " You arrived on the 5th floor. Here you can find nightclubs, gourmet restaurants from around the world and bars with expensive drinks." << endl;
		break;
	default:
		cout << " Incorect data." << endl;
	}

}