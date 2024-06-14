#include "User.h"
#include <filesystem>
#include <fstream>

User::User(const std::string& name, const std::string& login, const std::string pass):
	_name(name)
	,_login(login)
	,_pass(pass)
{
	readFromFile();

	DateName user(name, login, pass);

	bool userIsTrue = false;
	for (int i = 0; i < userDate.size(); ++i) {
		if (userDate[i].m_name == name && userDate[i].m_login == login && userDate[i].m_pass == pass)
			userIsTrue = true;
	}
	if (userIsTrue == false)
	{
		writeToFile(user);
		userDate.push_back(user);
	}			
}

User::~User()
{
	
}

void User::getUserName()
{
	for (int i = 0; i < userDate.size(); i++)
	{
		std::cout << i + 1 << ". " << userDate[i].m_name << "\n";
	}
}



void User::readFromFile()
{	
	std::fstream in(PathToFile, std::ios::in);

	if (in.is_open()) {
		DateName user;
		while (in >> user.m_name >> user.m_login >> user.m_pass) {
			userDate.push_back(user);
		}
	}
	in.close();
}

void User::writeToFile(DateName user)
{
	std::ofstream out;
	out.open(PathToFile, std::ios::app);

	//permission - разрешение spied on Denis Zlobin
    auto permission = std::filesystem::perms::group_all |
    std::filesystem::perms::others_all;
    std::filesystem::permissions(PathToFile, permission,
	std::filesystem::perm_options::remove);
	
	if (out.is_open()) {
		out << user.m_name << " " << user.m_login << " " << user.m_pass << "\n";
	}
	out.close();
}