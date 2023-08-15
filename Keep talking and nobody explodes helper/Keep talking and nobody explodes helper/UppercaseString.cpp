#pragma once

#include <iostream>

using namespace std;

void uppercaseString(string& str)
{
	for(int i = 0; i < str.size(); i++)
		if(str[i] > 96)
			str[i] -= 32;
}