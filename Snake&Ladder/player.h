#pragma once
#include <iostream>

using namespace std;

class player
{
	string playerName;
	int id;
public:
	player(string name, int id)
	{
		this->playerName = name;
		this->id = id;
	}
	string getPlayerName()
	{
		return playerName;
	}
	int getPlayerId()
	{
		return id;
	}
};

