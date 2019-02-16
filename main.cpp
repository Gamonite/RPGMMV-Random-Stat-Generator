#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int attack = rand() % 100 + 1;
	int defense = rand() % 100 + 1;
	int mattack = rand() % 100 + 1;
	int mdefense = rand() % 100 + 1;
	int agility = rand() % 100 + 1;
	int luck = rand() % 100 + 1;
	int mhp = rand() % 100 + 1;
	int mmp = rand() % 100 + 1;

	cout << "Attack is " << attack << endl;
	cout << "Defense is " << defense << endl;
	cout << "M-Attack is " << mattack << endl;
	cout << "M-Defense is " << mdefense << endl;
	cout << "Agility is " << agility << endl;
	cout << "Luck is " << luck << endl;

	return 0;
}