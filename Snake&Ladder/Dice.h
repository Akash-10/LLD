#pragma once
#include <cstdlib>
#include <iostream>

using namespace std;

class Dice
{
	int numberOfDice;
public:
	Dice() : numberOfDice(1) {}
	Dice(int num)
	{
		this->numberOfDice = num;
	}
	int rollDice();
	
};

