// main.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include <vector>
//--------------------------
using std::cout; using std::endl;
using std::vector; using std::string;


struct Destructible
{
	string name;
	int hitPoints;
};

int main()
{
	const vector <Destructible> objects
	{
		{"John", 24},
		{"Alex", 24},
		{"Daniel", 24},
		{"Taylor", 24},
		{"Brian", 24},
		{"Amelia", 24}
	};


	for ( auto object : objects ) {
		cout << "Name: " << object.name << "\tHit Points: " << object.hitPoints << "\t     Type: " << 3 << "\n";
	}
}