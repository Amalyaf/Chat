#pragma once
#include <iostream>

class Users
{
private:
	std::string* _login;
	std::string* _password;
	unsigned int count = 0;	// ���-�� �������������
	unsigned int maxcount = 0;	//����������� ��������� ���-�� ������������� (��������� ����� main)
public:
	Users(int n);
	~Users();
	void setUser();
	std::string* getLogin();
	std::string* getPassword();
	friend std::ostream& operator<<(std::ostream& output, const Users& user);
	unsigned int getMaxcount();

};