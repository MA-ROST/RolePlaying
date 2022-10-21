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
	vector<Destructible> objects{ {"John", 24}, {"Lee", 24} };
    std::cout << "Hello World!\n";
}