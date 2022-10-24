#pragma once
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::endl;
using std::vector; using std::string;

enum class Type {
	january,
	february,
	march,
	april,
	may,
	june,
	july,
	august,
	september,
	october,
	november,
	december
};

struct Destructible
{
	std::string name;
	int hitPoints;

	Type month;
};