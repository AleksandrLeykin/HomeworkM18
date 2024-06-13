#include "User.h"
#include <fstream>

User::User(const std::string& name, const std::string& login, const std::string pass):
	_name(name)
	,_login(login)
	,_pass(pass)
{
	readFromFile();	
}

User::~User()
{
	
}

void User::getUserName()
{
	/*for (int i = 0; i < userDate.size(); i++)
	{
		std::cout << "registered users:\n";
		std::cout << userDate[i]._name << " ";
	}*/
}

void User::readFromFile()
{
	
}

void User::writeToFile()
{
}
