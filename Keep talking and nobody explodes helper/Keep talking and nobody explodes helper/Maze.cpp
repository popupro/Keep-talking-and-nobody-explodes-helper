#pragma once

#include <iostream>
#include <vector>

using namespace std;

struct Mazes
{
	int indicator1, indicator2;
	vector<string> maze;
};

string removeHalf(string x)
{
	for(int i = 1; i < x.size(); i += 2)
	{
		x[i] = ' ';
	}

	return x;
}

string mazeSolver(vector<string> maze, int startX, int startY, int endX, int endY, string progress)
{
	maze[startY][startX] = 'O';
	maze[startY][startX] = '@';

	if(startX == endX && startY == endY)
		return progress;
	if((startX != endX || startY != endY) && maze[startY][startX + 1] == '@'
	   && maze[startY][startX - 1] == '@' && maze[startY - 1][startX] == '@' && maze[startY + 1][startX] == '@')
	{
		progress = " ";
		return progress;
	}

	if(maze[startY - 1][startX] != '@')
	{
		string x = mazeSolver(maze, startX, startY - 1, endX, endY, progress + "U");
		if(x != " ")
		{
			return removeHalf(x);
		}
	}
	if(maze[startY + 1][startX] != '@')
	{
		string x = mazeSolver(maze, startX, startY + 1, endX, endY, progress + "D");
		if(x != " ")
		{
			return removeHalf(x);
		}
	}
	if(maze[startY][startX - 1] != '@')
	{
		string x = mazeSolver(maze, startX - 1, startY, endX, endY, progress + "L");
		if(x != " ")
		{
			return removeHalf(x);
		}
	}
	if(maze[startY][startX + 1] != '@')
	{
		string x = mazeSolver(maze, startX + 1, startY, endX, endY, progress + "R");
		if(x != " ")
		{
			return removeHalf(x);
		}
	}

	return " ";
}

void maze()
{
	vector<Mazes> mazes{
		{
			12, 63, {
			"@@@@@@@@@@@@@",
			"@.....@.....@",
			"@.@@@.@.@@@@@",
			"@.@...@.....@",
			"@.@.@@@@@@@.@",
			"@.@...@.....@",
			"@.@@@.@.@@@.@",
			"@.@.....@...@",
			"@.@@@@@@@@@.@",
			"@.....@...@.@",
			"@.@@@.@.@@@.@",
			"@...@...@...@",
			"@@@@@@@@@@@@@"
}
		},
		{
			24, 52, {
			"@@@@@@@@@@@@@",
			"@.....@.....@",
			"@@@.@@@.@.@@@",
			"@...@...@...@",
			"@.@@@.@@@@@.@",
			"@.@...@.....@",
			"@.@.@@@.@@@.@",
			"@...@...@.@.@",
			"@.@@@.@@@.@.@",
			"@.@.@.@...@.@",
			"@.@.@.@.@@@.@",
			"@.@...@.....@",
			"@@@@@@@@@@@@@"
}
		},
		{
			44, 64, {
			"@@@@@@@@@@@@@",
			"@.....@.@...@",
			"@.@@@.@.@.@.@",
			"@.@.@.@...@.@",
			"@@@.@.@@@@@.@",
			"@...@.@...@.@",
			"@.@.@.@.@.@.@",
			"@.@.@.@.@.@.@",
			"@.@.@.@.@.@.@",
			"@.@...@.@.@.@",
			"@.@@@@@.@.@.@",
			"@.......@...@",
			"@@@@@@@@@@@@@"
}
		},
		{
			11, 14, {
			"@@@@@@@@@@@@@",
			"@...@.......@",
			"@.@.@@@@@@@.@",
			"@.@.@.......@",
			"@.@.@.@@@@@.@",
			"@.@...@...@.@",
			"@.@@@@@.@@@.@",
			"@.@.........@",
			"@.@@@@@@@@@.@",
			"@.........@.@",
			"@.@@@@@@@.@.@",
			"@.....@...@.@",
			"@@@@@@@@@@@@@"
}
		},
		{
			46, 53, {
			"@@@@@@@@@@@@@",
			"@...........@",
			"@@@@@@@@@.@.@",
			"@.........@.@",
			"@.@@@@@.@@@@@",
			"@...@...@...@",
			"@.@.@@@@@.@.@",
			"@.@.....@.@.@",
			"@.@@@@@.@@@.@",
			"@.@.......@.@",
			"@.@.@@@@@@@.@",
			"@.@.........@",
			"@@@@@@@@@@@@@"
}
		},
		{
			51, 35, {
			"@@@@@@@@@@@@@",
			"@.@...@.....@",
			"@.@.@.@@@.@.@",
			"@.@.@.@...@.@",
			"@.@.@.@.@@@.@",
			"@...@.@.@...@",
			"@.@@@@@.@.@@@",
			"@...@...@.@.@",
			"@@@.@.@.@.@.@",
			"@...@.@.@...@",
			"@.@@@@@.@@@.@",
			"@.......@...@",
			"@@@@@@@@@@@@@"
}
		},
			{
			21, 26, {
			"@@@@@@@@@@@@@",
			"@.......@...@",
			"@.@@@@@.@.@.@",
			"@.@...@...@.@",
			"@.@.@@@@@@@.@",
			"@...@...@...@",
			"@@@@@.@@@.@@@",
			"@...@.....@.@",
			"@.@.@.@@@@@.@",
			"@.@.@.....@.@",
			"@.@@@@@@@.@.@",
			"@...........@",
			"@@@@@@@@@@@@@"
}
			},
			{
			41, 34, {
			"@@@@@@@@@@@@@",
			"@.@.....@...@",
			"@.@.@@@.@.@.@",
			"@.....@...@.@",
			"@.@@@@@@@@@.@",
			"@.@.......@.@",
			"@.@.@@@@@.@.@",
			"@.@...@.....@",
			"@.@@@.@@@@@@@",
			"@.@.@.......@",
			"@.@.@@@@@@@@@",
			"@...........@",
			"@@@@@@@@@@@@@"
}
			},
			{
			15, 32, {
			"@@@@@@@@@@@@@",
			"@.@.........@",
			"@.@.@@@@@.@.@",
			"@.@.@...@.@.@",
			"@.@.@.@@@.@.@",
			"@.....@...@.@",
			"@.@@@@@.@@@.@",
			"@.@.@...@...@",
			"@.@.@.@@@@@.@",
			"@.@.@.@...@.@",
			"@.@.@.@.@.@@@",
			"@...@...@...@",
			"@@@@@@@@@@@@@"
}
			}
	};

	system("CLS");

	cout << "11 21 31\n12 22 32\n13 23 33\n\n";

	cout << "Enter one of the indicators: ";
	int indicator;
	cin >> indicator;

	cout << "Enter your location: ";
	int square;
	cin >> square;

	cout << "Enter triangle location: ";
	int triangle;
	cin >> triangle;

	vector<string> maze;

	for(int i = 0; i < mazes.size(); i++)
	{
		if(indicator == mazes[i].indicator1 || indicator == mazes[i].indicator2)
		{
			maze = mazes[i].maze;
			break;
		}
	}

	cout << mazeSolver(maze, ((square / 10) - 1) * 2 + 1, ((square % 10) - 1) * 2 + 1, ((triangle / 10) - 1) * 2 + 1, ((triangle % 10) - 1) * 2 + 1, " ") << "\n\n";
}