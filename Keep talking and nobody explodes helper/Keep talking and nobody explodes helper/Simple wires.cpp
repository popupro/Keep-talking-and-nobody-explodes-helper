#pragma once

#include<iostream>
#include "UppercaseString.h"

using namespace std;

int countChar(const string& letters, char find);

int simpleWires(const string& serial)
{
REPEAT:

	system("CLS");

	cout << "R - red\nY - yellow\nE - blue\nB - black\nW - white\n\n";

	cout << "Enter wires: ";
	string wires;
	cin >> wires;

	uppercaseString(wires);

	if(wires.size() < 3 || wires.size() > 6)
	{
		system("CLS");
		cout << "Wrong inputs, if you want to exit - type y, else type anything else: ";
		string input;
		cin >> input;

		if(input == "y" || input == "Y")
			return 0;

		goto REPEAT;
	}

	bool serialOdd = serial[5] % 2;

	if(wires.size() == 3)
	{
		if(countChar(wires, 'R') == 0)
			return 2;
		if(wires[2] == 'W')
			return 3;
		if(countChar(wires, 'E') == 2 && wires[2] != 'E')
			return 2;
		return 3;
	}
	if(wires.size() == 4)
	{
		if(countChar(wires, 'R') > 1 && serialOdd)
		{
			for(int i = wires.size() - 1; i >= 0; i--)
			{
				if(wires[i] == 'R')
					return ++i;
			}
		}
		if(countChar(wires, 'R') == 0 && wires[3] == 'Y')
			return 1;
		if(countChar(wires, 'E') == 1)
			return 1;
		if(countChar(wires, 'Y') >= 2)
			return 4;
		return 2;
	}
	if(wires.size() == 5)
	{
		if(wires[4] == 'B' && serialOdd)
			return 4;
		if(countChar(wires, 'R') == 1 && countChar(wires, 'Y') >= 2)
			return 1;
		if(countChar(wires, 'B') == 0) //wyrbw
			return 2;
		return 1;
	}
	if(wires.size() == 6)
	{
		if(countChar(wires, 'Y') == 0 && serialOdd)
			return 3;
		if(countChar(wires, 'Y') == 1 && countChar(wires, 'W') >= 2)
			return 4;
		if(countChar(wires, 'R') == 0)
			return 6;
		return 4;
	}

	return 0;
}

int countChar(const string& letters, char find)
{
	int n = 0;
	for(int i = 0; i < letters.size(); i++)
	{
		if(find == letters[i])
			n++;
	}
	return n;
}