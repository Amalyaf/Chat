#include "Users.h"

Users::Users(int n)
{
	maxcount = n;
	_login = new std::string[n]{};
	_password = new std::string[n]{};
}

Users::~Users()
{
	delete[]_login;
	delete[]_password;
}

void Users::setUser()
{
	if (count <= maxcount)
	{
		std::cout << "Введите логин: \n";
		std::cin >> _login[count];
		std::cout << "Введите пароль: \n";
		std::cin >> _password[count];
		count++;
	}
	else
	{
		std::cout << "Количество пользователей максимальное!\n";
	}
}

std::string* Users::getLogin()
{
	return _login;
}

std::string* Users::getPassword()
{
	return _password;
}

unsigned int Users::getMaxcount()
{
	return maxcount;
}


std::ostream& operator<<(std::ostream& output, const Users& user)
{
	std::cout << "\n---------------------------------------------------------------\n";
	for (int i = 0; i < user.count; i++)
	{
		output << "Логин: " << user._login[i] << '\n' <<
			"Пароль: " << user._password[i] << '\n';
	}

	
	return output;
}
