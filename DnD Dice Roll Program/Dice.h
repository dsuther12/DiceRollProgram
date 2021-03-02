#ifndef DICE_H
#define DICE_H
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Dice
{
public:

	void printMenu();
	void rollAgain();

	int D20();
	int D12();
	int D10();
	int D8();
	int D6();
	int D4();


};
#endif

