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
		std::cout << "������� �����: \n";
		std::cin >> _login[count];
		std::cout << "������� ������: \n";
		std::cin >> _password[count];
		count++;
	}
	else
	{
		std::cout << "���������� ������������� ������������!\n";
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
		output << "�����: " << user._login[i] << '\n' <<
			"������: " << user._password[i] << '\n';
	}

	
	return output;
}
