
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cout << "Input string " << endl;
	cin >> str;
	cout << "String is " << str << endl;
	int counter = 0;
	for (unsigned i = 0; i = str.find(":", i), i != std::string::npos;)
	{
		str.replace(i, 1, ";");
		i += 1;
		counter++;
	}
	cout << "New string is " << str << endl;
	cout << "Number of replaced symbols   " << counter;
	return 0;
}
