#include "Dice.h"


void Dice::printMenu()
{
	cout << "****Welcome to the mystical dice roll program!****\n" << endl;
	cout << "0. Exit menu" << endl;
	cout << "1. Roll D4 Dice" << endl;
	cout << "2. Roll D6 Dice" << endl;
	cout << "3. Roll D8 Dice" << endl;
	cout << "4. Roll D10 Dice" << endl;
	cout << "5. Roll D12 Dice" << endl;
	cout << "6. Roll D20 Dice" << endl;

	int answer;

	cin >> answer;

	switch (answer)
	{
	case(0):
		cout << "\nGoodbye!" << endl;
		return;

	case(1):

		cout << "\nRolling D4 Die..." << endl;
		cout << "\nYour number is: " << D4() << endl;
		rollAgain();
		break;

	case (2):

		cout << "\nRolling D6 Die..." << endl;
		cout << "\nYour number is: " << D6() << endl;
		rollAgain();
		break;
		
	case(3):

		cout << "\nRolling D8 Die..." << endl;
		cout << "\nYour number is: " << D8() << endl;
		rollAgain();
		break;

	case(4):

		cout << "\nRolling D10 Die..." << endl;
		cout << "\nYour number is: " << D10() << endl;
		rollAgain();
		break;

	case(5):

		cout << "\nRolling D12 Die..." << endl;
		cout << "\nYour number is: " << D12() << endl;
		rollAgain();
		break;

	case(6):

		cout << "\nRolling D20 Die..." << endl;
		cout << "\nYour number is: " << D20() << endl;
		rollAgain();
		break;

	default:
		cout << "You have entered an invalid die... Please try again." << endl;
		printMenu();
	}


}

void Dice::rollAgain()
{
	char rollAgain;

	cout << "\nWould you like to roll again? (y/n)" << endl;
	cin >> rollAgain;

	if (rollAgain == 'y' || rollAgain == 'Y')
	{
		printMenu();
	}
	else if (rollAgain == 'n' || rollAgain == 'N')
	{
		cout << "\nGoodbye!" << endl;
		return;
	}

}

int Dice::D4()
{
	int d4Roll;

	d4Roll = rand() % 4 + 1;

	return d4Roll;
}

int Dice::D6()
{
	int d6Roll;

	d6Roll = rand() % 6 + 1;

	return d6Roll;
}

int Dice::D8()
{
	int d8Roll;

	d8Roll = rand() % 8 + 1;

	return d8Roll;
}

int Dice::D10()
{
	int d10Roll;

	d10Roll = rand() % 10 + 1;

	return d10Roll;
}

int Dice::D12()
{
	int d12Roll;

	d12Roll = rand() % 12 + 1;

	return d12Roll;
}

int Dice::D20()
{
	int d20Roll;

	d20Roll = rand() % 20 + 1;

	return d20Roll;
}
