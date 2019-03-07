#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class address
{
public:
	address();
	address(string sname, int hnum, float longitude, float latitude);
	~address();
	address(const address & a);

	float getLat();
	float getLon();
	int getHouse();
	string getStreet();

	void setLat(float latitude);
	void setLon(float longitude);
	void setHouse(int hnum);
	void setStreet(string sname);
	void readAddress(string sname, int hnum);
	void readCords(float latitude, float longitude, int range);
	void print();

private:
	float lat;
	float lon;
	int house;
	string st;
};