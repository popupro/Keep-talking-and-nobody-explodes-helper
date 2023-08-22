#pragma once

#include <iostream>
#include "UppercaseString.h"

using namespace std;

char colorConvert(char color, int strikes, bool vowel)
{
	if(vowel)
	{
		if(strikes == 0)
		{
			switch(color)
			{
				case 'R':
					return 'B';
				case 'B':
					return 'R';
				case 'G':
					return 'Y';
				case 'Y':
					return 'G';
			}
		}
		if(strikes == 1)
		{
			switch(color)
			{
				case 'R':
					return 'Y';
				case 'B':
					return 'G';
				case 'G':
					return 'B';
				case 'Y':
					return 'R';
			}
		}
		if(strikes == 2)
		{
			switch(color)
			{
				case 'R':
					return 'G';
				case 'B':
					return 'R';
				case 'G':
					return 'Y';
				case 'Y':
					return 'B';
			}
		}
	}

	if(strikes == 0)
	{
		switch(color)
		{
			case 'R':
				return 'B';
			case 'B':
				return 'Y';
			case 'G':
				return 'G';
			case 'Y':
				return 'R';
		}
	}
	if(strikes == 1)
	{
		switch(color)
		{
			case 'R':
				return 'R';
			case 'B':
				return 'B';
			case 'G':
				return 'Y';
			case 'Y':
				return 'G';
		}
	}
	if(strikes == 2)
	{
		switch(color)
		{
			case 'R':
				return 'Y';
			case 'B':
				return 'G';
			case 'G':
				return 'B';
			case 'Y':
				return 'R';
		}
	}

	return '?';
}

const string vowels = "AEIOU";

void simonSays(const string& serial)
{
	REPEAT:

	system("CLS");

	cout << "R - red\nB - blue\nG - green\nY - yellow\n\n";

	bool vowel = false;
	for(int i = 0; i < serial.size(); i++)
	{
		if(vowels.find(serial[i]) != string::npos)
		{
			vowel = true;
			break;
		}
	}

	cout << "Enter ammount of strikes: ";
	int strikes;
	cin >> strikes;

	cout << "Enter flashing colors: ";
	string colors;
	cin >> colors;

	uppercaseString(colors);

	for(int i = 0; i < colors.size(); i++)
	{
		colors[i] = colorConvert(colors[i], strikes, vowel);
	}

	cout << "Sequence is: " << colors << "\n\n";

	cout << "Y - continue, anything else - return: ";
	char input;
	cin >> input;

	if(input == 'Y' || input == 'y')
		goto REPEAT;
}