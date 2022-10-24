// main.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "main.h"
//--------------------------

int main()
{
	const vector <Destructible> objects
	{
		{"John", 15, Type::april},
		{"Alex", 34, Type::july},
		{"Daniel", 36, Type::august},
		{"Taylor", 19, Type::december},
		{"Brian", 24, Type::january},
		{"Amelia", 22, Type::may}
	};

	for ( const auto& object : objects ) {
		cout << object.name << " is " << object.hitPoints <<
			" years old, and they were born in the " << static_cast <int> (object.
				month) << " month. \n";
	}
}
