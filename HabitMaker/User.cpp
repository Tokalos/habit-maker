#include "User.h"



User::User()
{
}


User::~User()
{
}


void User::SetUserName(string name,User* user_)
{
	user_->user_name_= name;
}


void User::DisplayUserName(User* user_)
{
	cout << user_->user_name_ << "Is a user name";
}
