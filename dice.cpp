//Ostyn Sy
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
using namespace std;

class Die
{

private:
	int sides;
	int value=0;

public:

	Die()//constructor
	{
		roll();
	};

	void setSides(int numSides) //setter
	{
		sides = numSides;
		roll();
	}

	void roll() //function roll
	{
		value = (rand() % sides) + 1;
	}

	int getSides() //getter
	{
		return sides;
	}

	int getValue()
	{
		return value;
	}
};

int main()
{

	Die Dice1;
	Die Dice2;
	
	srand(time(0));
	Dice1.setSides(6);
	cout << Dice1.getValue() << endl;

	Dice2.setSides(6);
	cout << Dice2.getValue() << endl;
	
return 0;
}