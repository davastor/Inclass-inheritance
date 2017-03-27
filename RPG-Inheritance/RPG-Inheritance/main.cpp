#include <iostream>
#include "Warrior.h"
#include "Archer.h"
#include "Berserker.h"
using namespace std;

void DisplayCharacterInfo(Character theCharacter);
void Attackc(Character theCharacter);

int main()
{
	auto bob = Character("bob", 100);
	DisplayCharacterInfo(bob);	
	system("pause");

	auto mike = Warrior("Mike", 100, "Longsword");
	DisplayCharacterInfo(mike);

	auto angryMike = Berserker("AngryMike", 200, "Axe");
	DisplayCharacterInfo(angryMike);

	auto legolas = Archer("Legolas", 100, "Elven Bow");
	DisplayCharacterInfo(legolas);

	system("pause");
	return 0;
}

void DisplayCharacterInfo(Character theCharacter)
{
	cout << theCharacter.getName() << " has " << theCharacter.getHealth() << " life." << endl;
}

void Attackc(Character theCharacter)
{
	cout << theCharacter.Attack();
}
