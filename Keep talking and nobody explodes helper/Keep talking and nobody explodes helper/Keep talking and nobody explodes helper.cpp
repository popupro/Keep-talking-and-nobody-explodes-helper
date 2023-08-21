#include <iostream>
#include <vector>
#include "Modules.h"
#include "UppercaseString.h"

using namespace std;

int main()
{
RESET:

	cout << "Input serial number: ";
	string serial;
	cin >> serial;
	uppercaseString(serial);

	vector<string> indicators;

	{
		cout << "Input indicators, end with 0: ";

		string indicator;
		do
		{
			cin >> indicator;
			if(indicator != "0")
			{
				uppercaseString(indicator);
				indicators.push_back(indicator);
			}
		} while(indicator != "0");
	}

	cout << "Input bateries: ";
	int bateries;
	cin >> bateries;

	vector<string> modules = {
		"simple wires",
		"button",
		"symbols",
		"simon says",
		"word game",
		"memory",
		"password"
	};

CONTINUE:

	for(int i = 0; i < modules.size(); i++)
	{
		cout << i + 1 << ". " << modules[i] << '\n';
	}
	cout << '\n';

	cout << "Pick module: ";
	int module;
	cin >> module;

	cout << '\n';

	switch(module)
	{
		case 1:
			cout << "Cut wire Nr. " << simpleWires(serial) << '\n';
			break;
		case 2:
			button(bateries, indicators);
			break;
		case 3:
			symbols();
			break;
		case 4:
			simonSays(serial);
			break;
		case 5:
			wordGame();
			break;
		case 6:
			memory();
			break;
		case 7:
			password();
			break;
	}

	cout << '\n' << "Next module type 'Y', reset type 'R', quit type anything else: ";
	string next;
	cin >> next;

	system("CLS");

	if(next == "y" || next == "Y")
		goto CONTINUE;
	else if(next == "r" || next == "R")
		goto RESET;

	return 0;
}
