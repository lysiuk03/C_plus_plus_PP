#include <iostream>
using namespace std;

void main()
{
	double time, distance;
	cout << " Enter the distance in kilometers: ";
	cin >> distance;
	cout << " Enter the time in hours: ";
	cin >> time;
	double speed = distance / time;
	cout << " Speed: " << speed << " km/hours" << endl;


	int hours1, hours2, minutes1, minutes2, seconds1, seconds2;
	cout << " Enter the start time of use: " << endl;
	cout << " Hours- ";
	cin >> hours1;
	cout << " Minutes- ";
	cin >> minutes1;
	cout << " Seconds- ";
	cin >> seconds1;
	cout << " Enter the end time of use: " << endl;
	cout << " Hours- ";
	cin >> hours2;
	cout << " Minutes- ";
	cin >> minutes2;
	cout << " Seconds- ";
	cin >> seconds2;
	int time_sec1 = seconds1 + minutes1 * 60 + hours1 * 60 * 60;
	int time_sec2 = seconds2 + minutes2 * 60 + hours2 * 60 * 60;
	int time_sec = time_sec2 - time_sec1;
	int time_min = time_sec / 60;
	int price = time_min * 2;
	cout << " Travel price: " << price << " grn" << endl;
}