#pragma once
#include "Calendar.h"
#include "User.h"
#include <iostream>
#include <stdlib.h>


class Interface
{
public:
	//constructor
	Interface(void);
	~Interface(void);
	//methods

	//Output
	void DisplayUser(User U);
	void WelcomeMessage();


	

	User* user_;
};

