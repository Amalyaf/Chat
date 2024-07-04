#include "Users.h"

Users::Users()
{
	_login = "-";
	_password = "-";
	_name = "-";
}

Users::~Users()
{

}

void Users::setUser()
{
	std::cout << "Введите логин: \n";
	std::cin >> _login;
	std::cout << "Введите пароль: \n";
	std::cin >> _password;
	std::cout << "Введите имя: \n";
	std::cin >> _name;
}

std::string Users::getLogin()
{
	return _login;
}

std::string Users::getPassword()
{
	return _password;
}

std::string Users::getName()
{
	return _name;
}


std::ostream& operator<<(std::ostream& output, const Users& user)
{
	output << "Логин пользователя: " << user._login << '\n' <<
			"Пароль: " << user._password << '\n' <<
			"Имя: " << user._name << "\n\n";
	return output;
}
