#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "proto.h"
#include "glovari.h"

using namespace std;

int main()
{
    srand(time(0));

    int ans = 1;

    cout << "*****************************************************" << endl;
    cout << "*                                                   *" << endl;
    cout << "*    Welcome to RPG Maker Random Stat Generator!    *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*****************************************************" << endl;
    cout << "\n\n" << endl;

    do
    {

    type();
    tier();
    magic();
    stat();

    cout << "\nYou picked a: " << mmagic << " Tier-" << mtier << " " << mtype << "!" << endl;
    cout << "\n" << endl;

    pstat();

    cout << "Would you like ot generate another?\n" << endl;
    cout << "1 - Yes" << endl;
    cout << "2 - No" << endl;
    cout << "Choice: " << endl;
    cin >> ans;
    cout << "\n\n" << endl;

    }while(ans != 2);

    return 0;
}
