#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "proto.h"
#include "globvari.h"

using namespace std;

int main()
{
	srand(time(0));

	cout << "*****************************************************" << endl;
	cout << "*                                                   *" << endl;
	cout << "*    Welcome to RPG Maker Random Stat Generator!    *" << endl;
	cout << "*                                                   *" << endl;
	cout << "*****************************************************" << endl;
	cout << "\n\n" << endl;

	int ti;


	type();
	ti = tier();
	magic();

	cout << "\nYou picked a: " << mmagic << " Tier-" << ti << " " << mtype << " " << /*type() <<*/ endl;

	return 0;

}

