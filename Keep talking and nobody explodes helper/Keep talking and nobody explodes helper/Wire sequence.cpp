#pragma once

#include <iostream>
#include <vector>
#include "UppercaseString.h"

using namespace std;

void wireSequence()
{
	system("CLS");
	vector<string> redSequence{
		"C", "B", "A", "AC", "B", "AC", "ABC", "AB", "B"
	};

	vector<string> blueSequence{
		"B", "AC", "B", "A", "B", "BC", "C", "AC", "A"
	};

	vector<string> blackSequence{
		"ABC", "AC", "B", "AC", "B", "BC", "AB", "C", "C"
	};

	int red = 0, blue = 0, black = 0;

	string wire{""};

	cout << "R - red\nB - blue\nK - black\n\n";
	cout << "Example: RC, end with 0\n\n";

	while(wire != "0")
	{
		cout << "Enter wire: ";
		cin >> wire;
		uppercaseString(wire);

		if(wire[0] == 'R')
		{
			if(redSequence[red].find(wire[1]) != string::npos)
				cout << "Cut\n";
			else cout << "Don't cut\n";
			red++;
		} else if(wire[0] == 'B')
		{
			if(blueSequence[blue].find(wire[1]) != string::npos)
				cout << "Cut\n";
			else cout << "Don't cut\n";
			blue++;
		} else if(wire[0] == 'K')
		{
			if(blackSequence[black].find(wire[1]) != string::npos)
				cout << "Cut\n";
			else cout << "Don't cut\n";
			black++;
		}
	}
}