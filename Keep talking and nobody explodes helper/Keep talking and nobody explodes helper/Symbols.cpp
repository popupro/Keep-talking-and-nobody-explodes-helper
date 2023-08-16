#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include "UppercaseString.h"

using namespace std;

string translate(const string& nickname)
{
	if(nickname == "OD")
		return "O with dongle";
	if(nickname == "PY")
		return "Pyramid";
	if(nickname == "L")
		return "Lambda";
	if(nickname == "LI")
		return "Lightning";
	if(nickname == "TS")
		return "Triangle squid";
	if(nickname == "CH")
		return "Cursive H";
	if(nickname == "BCD")
		return "Backwards C with dot";
	if(nickname == "EE")
		return "E with eyes";
	if(nickname == "CE")
		return "Cursive E";
	if(nickname == "WS")
		return "White star";
	if(nickname == "DQ")
		return "Downfacing questionmark";
	if(nickname == "C")
		return "Copyright";
	if(nickname == "CB")
		return "Comma butt";
	if(nickname == "XI")
		return "XI combined";
	if(nickname == "B3")
		return "Broken 3";
	if(nickname == "S6")
		return "Squished 6";
	if(nickname == "P")
		return "Paragraph";
	if(nickname == "BT")
		return "BT combined";
	if(nickname == "S")
		return "Smiley";
	if(nickname == "T")
		return "Trident";
	if(nickname == "CD")
		return "C with dot";
	if(nickname == "A3")
		return "Alien 3";
	if(nickname == "BS")
		return "Black star";
	if(nickname == "R")
		return "Railroads";
	if(nickname == "AE")
		return "AE together";
	if(nickname == "RI")
		return "Russian I";
	if(nickname == "O")
		return "Omega";
}

void symbols()
{
	cout << "OD - O with dongle\n";
	cout << "PY - Pyramid\n";
	cout << "L - Lambda\n";
	cout << "LI - Lightning\n";
	cout << "TS - Triangle squid\n";
	cout << "CH - Cursive H\n";
	cout << "BCD - Backwards C with dot\n";
	cout << "EE - E with eyes\n";
	cout << "CE - Cursive E\n";
	cout << "WS - White star\n";
	cout << "DQ - Downfacing questionmark\n";
	cout << "C - Copyright\n";
	cout << "CB - Comma butt\n";
	cout << "XI - XI combined\n";
	cout << "B3 - Broken 3\n";
	cout << "S6 - Squished 6\n";
	cout << "P - Paragraph\n";
	cout << "BT - BT combined\n";
	cout << "S - Smiley\n";
	cout << "T - Trident\n";
	cout << "CD - C with dot\n";
	cout << "A3 - Alien 3\n";
	cout << "BS - Black star\n";
	cout << "R - Railroads\n";
	cout << "AE - ae together\n";
	cout << "RI - Russian i\n";
	cout << "O - Omega\n\n";

	vector<vector<string>> rows = {
		{"OD", "PY", "L", "LI", "TS", "CH", "BCD"},
		{"EE", "OD", "BCD", "CE", "WS", "CH", "DQ"},
		{"C", "CB", "CE", "XI", "B3", "L", "WS"},
		{"S6", "P", "BT", "TS", "XI", "DQ", "S"},
		{"T", "S", "BT", "CD", "P", "A3", "BS"},
		{"S6", "EE", "R", "AE", "T", "RI", "O"}
	};

	vector<string> symbols(4);

	cout << "Input symbols: ";
	for(int i = 0; i < 4; i++)
	{
		cin >> symbols[i];
		uppercaseString(symbols[i]);
	}
	cout << '\n';

	for(int i = 0; i < rows.size(); i++)
	{
		bool allFound = true;
		for(int j = 0; j < symbols.size(); j++)
		{
			if(find(rows[i].begin(), rows[i].end(), symbols[j]) == rows[i].end())
			{
				allFound = false;
				break;
			}
		}

		if(allFound)
		{
			system("CLS");
			cout << "Press symbols: ";
			for(int j = 0; j < rows[i].size(); j++)
			{
				if(find(symbols.begin(), symbols.end(), rows[i][j]) != symbols.end())
				{
					cout << translate(rows[i][j]) << '/';
				}
			}

			cout << "\n\n";
			return;
		}
	}
}