#include "Users.h"

Users::Users(int n)
{
	_login = new std::string[n];
	_password = new std::string[n];
}

Users::~Users()
{
	delete[]_login;
	delete[]_password;
}

void Users::setUser()
{
	std::cout << "������� �����: \n";
	std::cin >> _login;
	std::cout << "������� ������: \n";
}

std::string* Users::getLogin()
{
	return _login;
}

std::string* Users::getPassword()
{
	return _password;
}

std::ostream& operator<<(std::ostream& output, const Users& user)
{
	output << "�����: " << user._login << '\n' <<
		"������: " << user._password << '\n';
	return output;
}
