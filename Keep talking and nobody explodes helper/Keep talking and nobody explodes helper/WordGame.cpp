#pragma once

#include <iostream>
#include <vector>
#include "UppercaseString.h"

using namespace std;

void wordGame()
{
	const vector<string> displayWords = {
		"YES",      "FIRST",  "DISPLAY", "OKAY",    "SAYS",    "NOTHING",
		"-",        "BLANK",  "NO",      "LED",     "LEAD",    "READ", 
		"RED",      "REED",   "LEED",    "HOLD_ON", "YOU",     "YOU_ARE",
		"YOUR",     "YOU'RE", "UR",      "THERE",   "THEY'RE", "THEIR",
		"THEY_ARE", "SEE",    "C",       "CEE"
	};

	const vector<string> positions = {
		"ML", "TR", "BR", "TR", "BR", "ML",
		"BL", "MR", "BR", "ML", "BR", "MR",
		"MR", "BL", "BL", "BR", "MR", "BR",
		"MR", "MR", "TL", "BR", "BL", "MR",
		"ML", "BR", "TR", "BR"
	};

	const vector<string> possibleWords = {
		"READY", "FIRST", "NO", "BLANK", "NOTHING", "YES", "WHAT", "UHHH",
		"LEFT", "RIGHT", "MIDDLE", "OKAY", "WAIT", "PRESS", "YOU", "YOU_ARE", 
		"YOUR", "YOU'RE", "UR", "U", "UH_HUH", "UH_UH",
		"WHAT?", "DONE", "NEXT", "HOLD", "SURE", "LIKE"
	};

	const vector<string> wordList = {
		"YES, OKAY, WHAT, MIDDLE, LEFT, PRESS, RIGHT, BLANK, READY, NO, FIRST, UHHH, NOTHING, WAIT",
		"LEFT, OKAY, YES, MIDDLE, NO, RIGHT, NOTHING, UHHH, WAIT, READY, BLANK, WHAT, PRESS, FIRST",
		"BLANK, UHHH, WAIT, FIRST, WHAT, READY, RIGHT, YES, NOTHING, LEFT, PRESS, OKAY, NO, MIDDLE",
		"WAIT, RIGHT, OKAY, MIDDLE, BLANK, PRESS, READY, NOTHING, NO, WHAT, LEFT, UHHH, YES, FIRST",
		"UHHH, RIGHT, OKAY, MIDDLE, YES, BLANK, NO, PRESS, LEFT, WHAT, WAIT, FIRST, NOTHING, READY",
		"OKAY, RIGHT, UHHH, MIDDLE, FIRST, WHAT, PRESS, READY, NOTHING, YES, LEFT, BLANK, NO, WAIT",
		"UHHH, WHAT, LEFT, NOTHING, READY, BLANK, MIDDLE, NO, OKAY, FIRST, WAIT, YES, PRESS, RIGHT",
		"READY, NOTHING, LEFT, WHAT, OKAY, YES, RIGHT, NO, PRESS, BLANK, UHHH, MIDDLE, WAIT, FIRST",
		"RIGHT, LEFT, FIRST, NO, MIDDLE, YES, BLANK, WHAT, UHHH, WAIT, PRESS, READY, OKAY, NOTHING",
		"YES, NOTHING, READY, PRESS, NO, WAIT, WHAT, RIGHT, MIDDLE, LEFT, UHHH, BLANK, OKAY, FIRST",
		"BLANK, READY, OKAY, WHAT, NOTHING, PRESS, NO, WAIT, LEFT, MIDDLE, RIGHT, FIRST, UHHH, YES",
		"MIDDLE, NO, FIRST, YES, UHHH, NOTHING, WAIT, OKAY, LEFT, READY, BLANK, PRESS, WHAT, RIGHT",
		"UHHH, NO, BLANK, OKAY, YES, LEFT, FIRST, PRESS, WHAT, WAIT, NOTHING, READY, RIGHT, MIDDLE",
		"RIGHT, MIDDLE, YES, READY, PRESS, OKAY, NOTHING, UHHH, BLANK, LEFT, FIRST, WHAT, NO, WAIT",
		"SURE, YOU ARE, YOUR, YOU'RE, NEXT, UH HUH, UR, HOLD, WHAT?, YOU, UH UH, LIKE, DONE, U",
		"YOUR, NEXT, LIKE, UH HUH, WHAT?, DONE, UH UH, HOLD, YOU, U, YOU'RE, SURE, UR, YOU ARE",
		"UH UH, YOU ARE, UH HUH, YOUR, NEXT, UR, SURE, U, YOU'RE, YOU, WHAT?, HOLD, LIKE, DONE",
		"YOU, YOU'RE, UR, NEXT, UH UH, YOU ARE, U, YOUR, WHAT?, UH HUH, SURE, DONE, LIKE, HOLD",
		"DONE, U, UR, UH HUH, WHAT?, SURE, YOUR, HOLD, YOU'RE, LIKE, NEXT, UH UH, YOU ARE, YOU",
		"UH HUH, SURE, NEXT, WHAT?, YOU'RE, UR, UH UH, DONE, U, YOU, LIKE, HOLD, YOU ARE, YOUR",
		"UH HUH, YOUR, YOU ARE, YOU, DONE, HOLD, UH UH, NEXT, SURE, LIKE, YOU'RE, UR, U, WHAT?",
		"UR, U, YOU ARE, YOU'RE, NEXT, UH UH, DONE, YOU, UH HUH, LIKE, YOUR, SURE, HOLD, WHAT?",
		"YOU, HOLD, YOU'RE, YOUR, U, DONE, UH UH, LIKE, YOU ARE, UH HUH, UR, NEXT, WHAT?, SURE",
		"SURE, UH HUH, NEXT, WHAT?, YOUR, UR, YOU'RE, HOLD, LIKE, YOU, U, YOU ARE, UH UH, DONE",
		"WHAT?, UH HUH, UH UH, YOUR, HOLD, SURE, NEXT, LIKE, DONE, YOU ARE, UR, YOU'RE, U, YOU",
		"YOU ARE, U, DONE, UH UH, YOU, UR, SURE, WHAT?, YOU'RE, NEXT, HOLD, UH HUH, YOUR, LIKE",
		"YOU ARE, DONE, LIKE, YOU'RE, YOU, HOLD, UH HUH, UR, SURE, U, WHAT?, NEXT, YOUR, UH UH",
		"YOU'RE, NEXT, U, UR, HOLD, DONE, UH UH, WHAT?, UH HUH, YOU, LIKE, SURE, YOU ARE, YOUR"
	};

	REPEAT:

	system("CLS");

	cout << "dash(-) for blank screen, multiple words write with underscore, for example UH_HUH\n\n";

	cout << "Enter display: ";
	string display;
	cin >> display;
	uppercaseString(display);

	for(int i = 0; i < displayWords.size(); i++)
	{
		if(display == displayWords[i])
		{
			cout << "Position is " << positions[i] << "\n\n";
			break;
		}
	}

	cout << "Enter lable: ";
	string lable;
	cin >> lable;
	uppercaseString(lable);

	for(int i = 0; i < possibleWords.size(); i++)
	{
		if(lable == possibleWords[i])
		{
			cout << wordList[i] << "\n\n";
			break;
		}
	}

	cout << "To continue enter Y, else enter anything else: ";
	char input;
	cin >> input;

	if(input == 'Y' || input == 'y')
		goto REPEAT;
}