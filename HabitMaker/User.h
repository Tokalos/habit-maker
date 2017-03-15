#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class User
{
public:
	User();
	~User();
	string user_name_;

public:
	void SetUserName(string name,User* user_);
	void DisplayUserName(User* user_);
//protected:
	
};

