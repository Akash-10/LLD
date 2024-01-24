#include "GameBoard.h"

GameBoard::GameBoard(Dice dice, queue<player>& playerQueue, vector<Jumper>& stairs, vector<Jumper>& snakes, map<string, int> playerPosition, int boardSize)
{
	this->dice = dice;
	this->players = playerQueue;
	this->ladders = stairs;
	this->snakes = snakes;
	this->playersCurrentPosition = playerPosition;
	this->boardSize = boardSize;
}

void GameBoard::startGame()
{
	//cout <<"Players outside Queue Size:" << players.size() << endl;
	while (players.size() > 1)
	{
		player playingPlayer = players.front();
		players.pop();
		//cout << "Players Queue Size:" << players.size() << endl;
		int diceValue = dice.rollDice();
		cout << "dice value:" << diceValue << endl;
		int currentPos = playersCurrentPosition[playingPlayer.getPlayerName()];
		int boardPosition = currentPos + diceValue;
		if (boardPosition > boardSize) {
			cout << playingPlayer.getPlayerName() << " is at " << boardPosition << endl;
			players.push(playingPlayer);
		}
		else if (boardPosition == boardSize)
		{
			cout<< playingPlayer.getPlayerName() << " is at " << boardSize << " won the game." << endl;
		}
		
		else {
			int currentPlayerPos = boardPosition;
			bool snakeBite = false;
			for (auto& snake : snakes)
			{
				if (snake.getStartPt() == boardPosition) {
					currentPlayerPos = snake.getEndPt();
					snakeBite = true;
				}
			}
			if (currentPlayerPos != boardPosition)
				cout << playingPlayer.getPlayerName() << " is bitten by snake at " << boardPosition << endl;
			if (!snakeBite)
			{
				for (auto& ladder : ladders)
				{
					if (ladder.getStartPt() == boardPosition) {
						currentPlayerPos = ladder.getEndPt();
					}
				}
				if (currentPlayerPos != boardPosition)
					cout << playingPlayer.getPlayerName() << " got the ladder at " << boardPosition << endl;

				if (currentPlayerPos == boardSize)
				{
					cout << playingPlayer.getPlayerName() << " is at " << boardSize << " & won the game." << endl;
				}
			}
			else
			{
				cout << playingPlayer.getPlayerName() << " is at " << currentPlayerPos << endl;
				playersCurrentPosition[playingPlayer.getPlayerName()] = currentPlayerPos;
				players.push(playingPlayer);
			}

		}
	}
}