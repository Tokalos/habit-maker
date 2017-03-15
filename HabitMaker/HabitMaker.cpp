// HabitMaker.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <stdlib.h>
#include "locale.h"
#include "Interface.h"
#include "User.h"
#include <cstdlib>




int main()
{

	using namespace std;


	Interface inter;
	User	u1;

	inter.WelcomeMessage(); //First Contact with user


	system("PAUSE");

	return 0;

}

