#pragma once

#include <iostream>
#include <vector>
#include "UppercaseString.h"

using namespace std;

void password()
{
	vector<string> passwords = {
		"ABOUT", "AFTER", "AGAIN", "BELOW", "COULD",
		"EVERY", "FIRST", "FOUND", "GREAT", "HOUSE",
		"LARGE", "LEARN", "NEVER", "OTHER", "PLACE",
		"PLANT", "POINT", "RIGHT", "SMALL", "SOUND",
		"SPELL", "STILL", "STUDY", "THEIR", "THERE",
		"THESE", "THING", "THINK", "THREE", "WATER",
		"WHERE", "WHICH", "WORLD", "WOULD", "WRITE"
	};

	cout << "Input three collums: ";
	vector<string> colums(3);
	for(int i = 0; i < colums.size(); i++)
	{
		cin >> colums[i];
		uppercaseString(colums[i]);
	}

	for(int i = 0; i < passwords.size(); i++)
	{
		bool foundAll = true;
		for(int j = 0; j < colums.size(); j++)
		{
			if(colums[j].find(passwords[i][j]) == string::npos)
			{
				foundAll = false;
			}
		}

		if(foundAll)
			cout << "Password is: " << passwords[i] << "\n\n";
	}
}
