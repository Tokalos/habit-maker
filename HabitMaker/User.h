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
protected:
	string user_name_;
public:
	void SetUserName(string name);
};

