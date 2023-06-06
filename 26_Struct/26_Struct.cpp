#include <iostream>
using namespace std;

struct machine
{
	char firm[20] = "Samsung";
	char color[20] = "white";
	int width = 60;
	int length = 45;
	int height = 85;
	int power = 2;
	int speed = 1200;
	int heating_t = 85;
};

void show(machine wasch)
{
	cout << " Firm: ";
	cout << wasch.firm << endl;
	cout << " Color: ";
	cout << wasch.color << endl;
	cout << " Width: ";
	cout << wasch.width << endl;
	cout << " Length: ";
	cout << wasch.length << endl;
	cout << " Height: ";
	cout << wasch.height << endl;
	cout << " Power: ";
	cout << wasch.power << endl;
	cout << " Spin speed: ";
	cout << wasch.speed << endl;
	cout << " Heating temperature: ";
	cout << wasch.heating_t << endl;
	cout << endl;
}

machine fill()
{
	machine temp;

	cout << " Enter firm: ";
	cin >> temp.firm;
	cout << " Enter color: ";
	cin >> temp.color;
	cout << " Enter width: ";
	cin >> temp.width;
	cout << " Enter length: ";
	cin >> temp.length;
	cout << " Enter height: ";
	cin >> temp.height;
	cout << " Enter power: ";
	cin >> temp.power;
	cout << " Enter spin speed: ";
	cin >> temp.speed;
	cout << " Enter heating temperature: ";
	cin >> temp.heating_t;
	cout << endl;
	return temp;
}

struct iron
{
	char firm[20] = "Tefal";
	char model[20] = "TEFAL FV1710";
	char color[20] = "blue";
	int min_t = 75;
	int max_t = 205;
	char smoke[5] = "yes";
	int power = 1800;
};

void SHOW(iron iro)
{
	cout << " Firm: ";
	cout << iro.firm << endl;
	cout << " Model: ";
	cout << iro.model << endl;
	cout << " Color: ";
	cout << iro.color << endl;
	cout << " Minimum temperature: ";
	cout << iro.min_t << endl;
	cout << " Maximum temperature: ";
	cout << iro.max_t << endl;
	cout << " Smoke: ";
	cout << iro.smoke << endl;
	cout << " Power: ";
	cout << iro.power << endl;
	cout << endl;
}

iron FILL()
{
	iron temp;

	cout << " Enter firm: ";
	cin >> temp.firm;
	cout << " Enter model: ";
	cin >> temp.model;
	cout << " Enter color: ";
	cin >> temp.color;
	cout << " Enter minimum temperature: ";
	cin >> temp.min_t;
	cout << " Enter maximum temperature: ";
	cin >> temp.max_t;
	cout << " Enter smoke: ";
	cin >> temp.smoke;
	cout << " Enter power: ";
	cin >> temp.power;
	cout << endl;
	return temp;
}

int main()
{
	cout << "----------Washing machine----------" << endl;
	machine wasch;
	show(wasch);
	wasch = fill();
	show(wasch);
	cout << "----------Iron----------" << endl;
	iron iro;
	SHOW(iro);
	iro = FILL();
	SHOW(iro);

}