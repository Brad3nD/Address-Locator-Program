#include "address.h"

int main()
{
	string end = "y";
	string stsearch;
	int housenum;
	address a;
	char ch = ' ';
	while (end == "y")
	{
		cout << "Enter your desired house number: ";
		cin >> housenum;
		cin.ignore();
		cout << "Enter your desired street name: ";
		getline(cin, stsearch);
		a.readAddress(stsearch, housenum);
		cout << "Would you like to search again? (y/n) ";
		cin >> end;
		cin.ignore();
	}
}
