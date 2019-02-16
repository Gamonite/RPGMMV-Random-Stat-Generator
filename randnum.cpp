#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void randnum()
{
	int random;

	srand(time(NULL));

	random = rand() % 100 + 1;

	return random;
}
	