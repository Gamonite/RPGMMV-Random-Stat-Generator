#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "proto.h"
#include "globvari.h"

using namespace std;

int randnum1()
{
	int num;
	num = rand() % 100 + 1;

	return num;
};

int randnum2()
{
	int num;
	num = ((rand() % 100 + 1) + 100);

	return num;
};

int randnum3()
{
	int num;
	num = ((rand() % 100 + 1) + 200);

	return num;
};

int randnum4()
{
	int num;
	num = ((rand() % 100 + 1) + 300);

	return num;
};

int randnum5()
{
	int num;
	num = ((rand() % 100 + 1) + 400);

	return num;
};
