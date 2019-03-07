#include "address.h"

address::address()
{
    lat = 0;
	lon = 0;
	house = 0;
	st = "";
}
address::address(const address & a)
{
	lat = 0;
	lon = 0;
	house = 0;
	st = "";
}
address::address(string sname, int hnum, float longitude, float latitude)
{
	lat = latitude;
	lon = longitude;
	house = hnum;
	st = sname;
}
address::~address()
{

}

float address::getLat()
{
	return lat;
}
float address::getLon()
{
	return lon;
}
int address::getHouse()
{
	return house;
}
string address::getStreet()
{
	return st;
}

void address::setLat(float latitude)
{
	lat = latitude;
}
void address::setLon(float longitude)
{
	lon = longitude;
}
void address::setHouse(int hnum)
{
	house = hnum;
}
void address::setStreet(string sname)
{
	st = sname;
}

void address::print()
{
	cout << "Latitude: " << lat << endl;
	cout << "Longitude: " << lon << endl;
	cout << "Number: " << house << endl;
	cout << "Street: " << st << endl;
}

void address::readAddress(string sname, int hnum)
{
	char ch = ' ';
	ifstream readFile;
	address a1;
	vector<address>addresses;
	readFile.open("input1.txt");

	while (readFile >> lat >> lon >> house)
	{
		readFile.get(ch);
		getline(readFile, st);
		a1.setLat(lat);
		a1.setLon(lon);
		a1.setHouse(house);
		a1.setStreet(st);
		if (a1.getStreet() == sname)
		{
			if (a1.getHouse() == hnum)
			{
				a1.print();
			}
		}
		addresses.push_back(a1);
	}
}
void address::readCords(float latitude, float longitude, int range)
{
	char ch = ' ';
	ifstream readFile;
	address a1;
	vector<address>addresses;
	readFile.open("input2.txt");
	float latrangmax = latitude + range;
	float latrangmin = latitude - range;
	float lonrangmax = longitude + range;
	float lonrangmin = longitude - range;

	while (readFile >> lat >> lon >> house)
	{
		readFile.get(ch);
		getline(readFile, st);
		a1.setLat(lat);
		a1.setLon(lon);
		a1.setHouse(house);
		a1.setStreet(st);
		if (a1.getLat() <= latrangmax && a1.getLat() >= latrangmin)
		{
			if (a1.getLon() <= lonrangmax && a1.getLon() >= lonrangmin)
			{
				a1.print();
				cout << endl;
			}
		}
		addresses.push_back(a1);
	}
}