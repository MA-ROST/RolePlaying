#pragma once
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::endl;
using std::vector; using std::string;

enum class Type { orange, apple };

struct Destructible
{
	std::string name;
	int hitPoints;

	Type objectType;
};