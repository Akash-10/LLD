#pragma once
#include <iostream>
#include <map>
#include <queue>
#include <vector>
#include "Dice.h"
#include "jumper.h"
#include "player.h"

using namespace std;

class GameBoard
{
	Dice dice;
	queue<player> players;
	vector<Jumper> ladders;
	vector<Jumper> snakes;
	map<string, int> playersCurrentPosition;
	int boardSize;
public:
	GameBoard() {}
	GameBoard(Dice dice, queue<player>& playerQueue, vector<Jumper>& stairs, vector<Jumper>& snakes, map<string, int> playerPosition, int boardSize);
	void startGame();
};

