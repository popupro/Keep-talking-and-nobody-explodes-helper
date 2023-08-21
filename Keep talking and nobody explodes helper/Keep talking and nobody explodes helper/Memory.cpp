#pragma once

#include <iostream>
#include <vector>

using namespace std;

struct Turn
{
	int position;
	int label;
};

void memory()
{
	system("CLS");

	vector<Turn> turns(4);

	int display;
	cout << "Enter display: ";
	cin >> display;

	if(display == 1 || display == 2)
	{
		turns[0].position = 2;
		cout << "Position 2, enter label: ";
		cin >> turns[0].label;
	} else if(display == 3)
	{
		turns[0].position = 3;
		cout << "Position 3, enter label: ";
		cin >> turns[0].label;
	} else if(display == 4)
	{
		turns[0].position = 4;
		cout << "Position 4, enter label: ";
		cin >> turns[0].label;
	}

	cout << "\nEnter display: ";
	cin >> display;

	if(display == 1)
	{
		turns[1].label = 4;
		cout << "label 4, enter position: ";
		cin >> turns[1].position;
	} else if(display == 2 || display == 4)
	{
		turns[1].position = turns[0].position;
		cout << "Position " << turns[0].position << ", enter label: ";
		cin >> turns[1].label;
	} else if(display == 3)
	{
		turns[1].position = 1;
		cout << "Position 1, enter label: ";
		cin >> turns[1].label;
	}

	cout << "\nEnter display: ";
	cin >> display;

	if(display == 1)
	{
		turns[2].label = turns[1].label;
		cout << "label " << turns[1].label << ", enter position: ";
		cin >> turns[2].position;
	} else if(display == 2)
	{
		turns[2].label = turns[0].label;
		cout << "label " << turns[0].label << ", enter position: ";
		cin >> turns[2].position;
	} else if(display == 3)
	{
		turns[2].position = 3;
		cout << "Position 3, enter label: ";
		cin >> turns[2].label;
	} else if(display == 4)
	{
		turns[2].label = 4;
		cout << "label 4, enter position: ";
		cin >> turns[2].position;
	}

	cout << "\nEnter display: ";
	cin >> display;

	if(display == 1)
	{
		turns[3].position = turns[0].position;
		cout << "Position " << turns[0].position << ", enter label: ";
		cin >> turns[3].label;
	} else if(display == 2)
	{
		turns[3].position = 1;
		cout << "Position 1, enter label: ";
		cin >> turns[3].label;
	} else if(display == 3 || display == 4)
	{
		turns[3].position = turns[1].position;
		cout << "Position " << turns[1].position << ", enter label: ";
		cin >> turns[3].label;
	}

	cout << "\nEnter display: ";
	cin >> display;

	cout << "Label ";

	switch(display)
	{
		case 1:
			cout << turns[0].label;
			break;
		case 2:
			cout << turns[1].label;
			break;
		case 3:
			cout << turns[3].label;
			break;
		case 4:
			cout << turns[2].label;
	}

	cout << "\n\n";
}