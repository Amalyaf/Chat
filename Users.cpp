#include "Users.h"

Users::Users()
{
	_login = new std::string[];
	_password = new std::string[];
}

Users::~Users()
{
	delete[]_login;
	delete[]_password;
}

std::string* Users::getLogin()
{
	return _login;
}

std::string* Users::getPassword()
{
	return _password;
}

std::ostream& operator<<(std::ostream output, Users& user)
{
	output << "Логин: " << user._login << '\n' <<
		"Пароль: " << user._password << '\n';
	return output;
}
