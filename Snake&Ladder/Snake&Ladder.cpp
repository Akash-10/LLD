// Snake&Ladder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "GameBoard.h"

int main()
{
    Dice dice = Dice(1);
    player p1 = player("Alice", 1);
    player p2 = player("Prem", 2);
    queue<player> playerQueue;
    playerQueue.push(p1);
    playerQueue.push(p2);
    Jumper ladder1 = Jumper(6, 15, 1);
    Jumper ladder2 = Jumper(35, 55, 1);
    vector<Jumper> ladders;
    ladders.push_back(ladder1);
    ladders.push_back(ladder2);

    Jumper snake1 = Jumper(25, 9, 0);
    Jumper snake2 = Jumper(68, 10, 0);
    vector<Jumper> snakes;
    snakes.push_back(snake1);
    snakes.push_back(snake2);

    map<string, int> playerPos;
    playerPos["Alice"] = 0;
    playerPos["Prem"] = 0;

    int boardCell = 70;
    cout << "------------------Game start------------------" << endl;
    GameBoard start = GameBoard(dice, playerQueue, ladders, snakes, playerPos, boardCell);
    start.startGame();
    cout << "------------------Game End--------------------" << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
