#pragma once
#include <iostream>

class Users
{
private:
	std::string* _login;
	std::string* _password;
public:
	Users(int n);
	~Users();
	void setUser();
	std::string* getLogin();
	std::string* getPassword();
	friend std::ostream& operator<<(std::ostream& output, const Users& user);
};