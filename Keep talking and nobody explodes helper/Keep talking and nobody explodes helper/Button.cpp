#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include "UppercaseString.h"

using namespace std;

void releaseSection()
{
	cout << "Blue - 4\nYellow - 5\nOtherwise - 1\n\n";
}

void button(int bateries, const vector<string>& indicators)
{
	cout << "R - red\nY - yellow\nB - blue\nK - black\nW - white\n\n";

	cout << "Input color and text: ";
	string color;
	string text;
	cin >> color >> text;
	uppercaseString(text);
	uppercaseString(color);

	if(color == "B" && text == "ABORT")
	{
		releaseSection();
		return;
	}
	if(bateries > 1 && text == "DETONATE")
	{
		cout << "Click\n\n";
		return;
	}
	if(color == "W" && find(indicators.begin(), indicators.end(), "CAR") != indicators.end())
	{
		releaseSection();
		return;
	}
	if(bateries > 2 && find(indicators.begin(), indicators.end(), "FRK") != indicators.end())
	{
		cout << "Click\n\n";
		return;
	}
	if(color == "Y")
	{
		releaseSection();
		return;
	}
	if(color == "R" && text == "HOLD")
	{
		cout << "Click\n\n";
		return;
	}
	releaseSection();
}