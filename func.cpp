#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "proto.h"
#include "globvari.h"

using namespace std;

string mtype;
string mmagic;

void type()
{
	int opt;
	int type;

	do
	{
		cout << "What would you like to generate?\n" << endl;
		cout << "1 - Weapon Stats" << endl;
		cout << "2 - Armor Stats\n" << endl;
		cout << "Pick A Number: ";
		cin >> type;
		if (type == 1)
		{
			mtype = "Weapon";
			opt = 1;
		}
		else if (type == 2)
		{
			mtype = "Armor";
			opt = 1;
		}
		else
		{
			cout << "Pick a valid option please!\n\n" << endl;
		}
	} while (opt == 0);

};

int tier()
{
	int tier;
	int opt;

	do
	{
		cout << "\n\nWhich tier would you like?\n" << endl;
		cout << "1 - 1-100" << endl;
		cout << "2 - 101-200" << endl;
		cout << "3 - 201-300" << endl;
		cout << "4 - 301-400" << endl;
		cout << "5 - 401-500\n" << endl;
		cout << "Pick A Number: ";
		cin >> tier;
		if (tier >= 1 && tier <= 5)
		{
			opt = 1;
		}
		else
		{
			cout << "Pick a valid option please!\n\n" << endl;
		}
	} while (opt == 0);

	return tier;
};

int magic()
{
	int magic;
	int opt;

	do
	{
		cout << "Do want this to me magical?\n" << endl;
		cout << "1 - Yes" << endl;
		cout << "2 - No\n" << endl;
		cout << "Pick A Number: ";
		cin >> magic;

		if (magic == 1)
		{
			mmagic = "Enchanted";
			opt = 1;
		}
		else if (magic == 2)
		{
			mmagic = "Non-magical";
			opt = 1;
		}
		else
		{
			cout << "Pick a valid option please!\n\n" << endl;
		}
	} while (opt == 0);

};

void wtype(int& x)
{
	string wtype;

	if (x == 1)
	{
		wtype = "weapon";
	}
	else
	{
		wtype = "armor";
	}

	cout << wtype;
}
