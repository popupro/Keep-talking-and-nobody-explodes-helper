#pragma once

#include <iostream>
#include <vector>
#include "UppercaseString.h"

using namespace std;

void complexWires(const string& serial, bool parallel, int batteries)
{
	system("CLS");

	cout << "R - red\nB - blue\nS - star\nL - LED\n- - blank\n0 - end\n\n";

	cout << "Enter wires: ";
	string wire;
	vector<string> wires;

	do
	{
		cin >> wire;
		uppercaseString(wire);
		if(wire != "0")
			wires.push_back(wire);
	} while(wire != "0");

	string ans = "";

	for(int i = 0; i < wires.size(); i++)
	{
		int x = 0;
		x += (wires[i].find('R') != string::npos) * 8;
		x += (wires[i].find('B') != string::npos) * 4;
		x += (wires[i].find('S') != string::npos) * 2;
		x += (wires[i].find('L') != string::npos);

		switch(x)
		{
			case 0:
			case 2:
			case 10:
				ans += "cut|";
				break;
			case 1:
			case 6:
			case 15:
				ans += "don't|";
				break;
			case 4:
			case 8:
			case 12:
			case 13:
				if(serial[5] % 2)
					ans += "don't|";
				else ans += "cut|";
				break;
			case 5:
			case 7:
			case 14:
				if(parallel)
					ans += "cut|";
				else ans += "don't|";
				break;
			case 3:
			case 9:
			case 11:
				if(batteries > 1)
					ans += "cut|";
				else ans += "don't|";
		}
	}

	cout << "\n" << ans << "\n\n";
}