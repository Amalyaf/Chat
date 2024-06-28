#pragma once
#include <iostream>

class Users
{
private:
	std::string* _login;
	std::string* _password;
public:
	Users();
	~Users();
	std::string* getLogin();
	std::string* getPassword();
	friend std::ostream& operator<<(std::ostream output, Users& user);
};