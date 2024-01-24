#include "Dice.h"
#include <cstdlib>
#include <random>

using namespace std;

int Dice::rollDice()
{
	return ((int)(rand() % (6 * numberOfDice - 1 * numberOfDice + 1)) + 1*numberOfDice);
}