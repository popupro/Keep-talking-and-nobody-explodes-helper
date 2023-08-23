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
		cout << "Input lit indicators, end with 0: ";

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

	cout << "Input parallel port: ";
	bool parallel;
	cin >> parallel;

	vector<string> modules = {
		"simple wires",
		"button",
		"symbols",
		"simon says",
		"word game",
		"memory",
		"morse code",
		"complex wires",
		"wire sequence",
		"maze",
		"password",
		"new bomb",
		"quit"
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
			morseCode();
			break;
		case 8:
			complexWires(serial, parallel, bateries);
			break;
		case 9:
			wireSequence();
			break;
		case 10:
			maze();
			break;
		case 11:
			password();
			break;
		case 12:
			goto RESET;
			break;
		case 13:
			goto EXIT;
			break;
	}
	goto CONTINUE;

EXIT:

	return 0;
}
