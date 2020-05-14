#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "proto.h"
#include "glovari.h"

using namespace std;

string mtype;
string mmagic;
int itype;
int imagic;
int mtier;
int mult;
int attack;
int defense;
int mattack;
int mdefense;
int agility;
int luck;
int mhp;
int mmp;

void type()
{
	int opt;

	do
	{
		cout << "Which would you like to generate?\n" << endl;
		cout << "1 - Weapon Stats" << endl;
		cout << "2 - Armor Stats\n" << endl;
		cout << "Pick A Number: ";
		cin >> itype;
		if (itype == 1)
		{
			mtype = "Weapon";
			opt = 1;
		}
		else if (itype == 2)
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

void tier()
{
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
		cin >> mtier;
		if (mtier >= 1 && mtier <= 5)
		{
			opt = 1;
		}
		else
		{
			cout << "Pick a valid option please!\n\n" << endl;
		}
	} while (opt == 0);
};

void magic()
{
	int opt;

	do
	{
		cout << "Do want this to me magical?\n" << endl;
		cout << "1 - Yes" << endl;
		cout << "2 - No\n" << endl;
		cout << "Pick A Number: ";
		cin >> imagic;

		if (imagic == 1)
		{
			mmagic = "Enchanted";
			opt = 1;
		}
		else if (imagic == 2)
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

void stat()
{
	switch (mtier)
	{
	case 1:
		mult = 1;
		break;
	case 2:
		mult = 100;
		break;
	case 3:
		mult = 200;
		break;
	case 4:
		mult = 300;
		break;
	case 5:
		mult = 400;
		break;
	}

	attack = rand() % 100 + mult;
	defense = rand() % 100 + mult;
	mattack = rand() % 100 + mult;
	mdefense = rand() % 100 + mult;
	agility = rand() % 100 + mult;
	luck = rand() % 100 + mult;
	mhp = rand() % 100 + mult;
	mmp = rand() % 100 + mult;
};

void pstat()
{
    if (itype == 1)
    {
        wstat();
    }
    else
    {
        astat();
    }
};

void wstat()
{
    if(imagic == 2)
    {
        cout << "Attack stat is ----> " << attack << endl;
        //cout << "Defense stat is ---> " << defense << endl;
        //cout << "M-Attack stat is --> " << mattack << endl;
        //cout << "M-Defense stat is -> " << mdefense << endl;
        cout << "Agility stat is ---> " << agility/2 << endl;
        cout << "Luck stat is ------> " << luck/3 << endl;
        cout << "Max HP stat is ----> " << mhp << endl;
        cout << "Max MP stat is ----> " << mmp << endl;
        cout << "\n\n" << endl;
    }
    else
    {
        cout << "Attack stat is ----> " << attack << endl;
        //cout << "Defense stat is ---> " << defense << endl;
        cout << "M-Attack stat is --> " << mattack << endl;
        //cout << "M-Defense stat is -> " << mdefense << endl;
        cout << "Agility stat is ---> " << agility/2 << endl;
        cout << "Luck stat is ------> " << luck/3 << endl;
        cout << "Max HP stat is ----> " << mhp << endl;
        cout << "Max MP stat is ----> " << mmp << endl;
        cout << "\n\n" << endl;
    }
};

void astat()
{
    if(imagic == 2)
    {
        //cout << "Attack stat is ----> " << attack << endl;
        cout << "Defense stat is ---> " << defense << endl;
        //cout << "M-Attack stat is --> " << mattack << endl;
        //cout << "M-Defense stat is -> " << mdefense << endl;
        cout << "Agility stat is ---> " << agility/2 << endl;
        cout << "Luck stat is ------> " << luck/3 << endl;
        cout << "Max HP stat is ----> " << mhp << endl;
        cout << "Max MP stat is ----> " << mmp << endl;
        cout << "\n\n" << endl;
    }
    else
    {
        //cout << "Attack stat is ----> " << attack << endl;
        cout << "Defense stat is ---> " << defense << endl;
        //cout << "M-Attack stat is --> " << mattack << endl;
        cout << "M-Defense stat is -> " << mdefense << endl;
        cout << "Agility stat is ---> " << agility/2 << endl;
        cout << "Luck stat is ------> " << luck/3 << endl;
        cout << "Max HP stat is ----> " << mhp << endl;
        cout << "Max MP stat is ----> " << mmp << endl;
        cout << "\n\n" << endl;
    }
};
