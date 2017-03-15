#include "Interface.h"



Interface::Interface()
{
	user_ = new User;
	user_->SetUserName("Marian",user_);
}


Interface::~Interface()
{
}


void Interface::DisplayUser(User U)
{
	//cout << "USER NAME:" << U->DisplayUserName<<endl;
}


void Interface::WelcomeMessage()
{
	cout << "Welcome!" << endl << "This is console version of Habit Maker" << endl;
	cout << "I hope you will like the full one when it is avaliable" <<  endl;
	cout << "Yep the user name is";
	user_->DisplayUserName(user_);
}
