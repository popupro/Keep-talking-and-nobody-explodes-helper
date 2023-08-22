#pragma once

#include <iostream>
#include <vector>

using namespace std;

void morseCode()
{
	vector<string> words{
		"SHELL", "HALLS", "SLICK", "TRICK", "BOXES", "LEAKS", "STROBE", "BISTRO", 
		"FLICK", "BOMBS", "BREAK", "BRICK", "STEAK", "STING", "VECTOR", "BEATS"
	};

	vector<float> frequencies{
		3.505, 3.515, 3.522, 3.532, 3.535, 3.542, 3.545, 3.552, 
		3.555, 3.565, 3.572, 3.575, 3.582, 3.592, 3.595, 3.600  
	};

	vector<string> morseChart{
		".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",
		".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", 
		"...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."
	};

	cout << "Enter morse code, end with 0: ";

	string word = "";
	string check = "";
	while(check != "0")
	{
		cin >> check;
		if(check != "0")
		{
			word += find(morseChart.begin(), morseChart.end(), check) - morseChart.begin() + 65;
		}
	}

	for(int i = 0; i < words.size(); i++)
	{
		if(words[i].find(word) != string::npos)
		{
			cout << words[i] << '|' << frequencies[i] << '\n';
		}
	}
	cout << '\n';
}