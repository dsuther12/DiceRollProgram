// Author: Dylan Suther
// Date: 3/2/2021
// Simple dice roll program to be used for games or whatever the need may be

#include "Dice.h"

int main()
{
	srand(time(NULL));

	Dice diceRoll;

	diceRoll.printMenu();
}