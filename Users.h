#pragma once
#include <iostream>

class Users
{
private:
	std::string _login;
	std::string _password;
	std::string _name;
	
public:
	Users();
	~Users();
	void setUser();
	std::string getLogin();
	std::string getPassword();
	std::string getName();
	friend std::ostream& operator<<(std::ostream& output, const Users& user);

};