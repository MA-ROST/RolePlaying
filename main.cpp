// main.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "main.h"
//--------------------------

int main()
{
	const vector <Destructible> objects
	{
		{"John", 24, Type::apple},
		{"Alex", 24, Type::apple},
		{"Daniel", 24, Type::apple},
		{"Taylor", 24, Type::apple},
		{"Brian", 24, Type::apple},
		{"Amelia", 24, Type::apple}
	};

	for ( const auto& object : objects ) {
		cout << "Name: " << object.name
			<< "\tHit Points: " << object.hitPoints
			<< "\t     Type: " << static_cast<int>(object.objectType) << "\n";
	}
}
