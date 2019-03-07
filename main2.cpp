#include "address.h";

int main()
{
	string end = "y";
	float lati;
	float longi;
	int range;
	address a;
	char ch = ' ';
	while (end == "y")
	{
		cout << "Enter your desired latitude: ";
		cin >> lati;
		cin.ignore();
		cout << "Enter your desired longitude: ";
		cin>> longi;
		cin.ignore();
		cout << "Enter your desired range: ";
		cin >> range;
		cin.ignore();
		cin.clear();
		a.readCords(lati,longi,range);
		cout << "Would you like to search again? (y/n) ";
		cin >> end;
		cin.ignore();
	}
}