#pragma once
#include <iostream>
#include "Message.h"

class Chat
{
private:
	std::string _recipient;
	std::string _sender;
	Users* _allUsers;
	std::string _login;
	std::string _password;
	Message* _privateMessage;
	Message* _publicMessage;
	unsigned int _count = 0;	// кол-во пользователей
	unsigned int _maxcount = 0;	//максимально возможное кол-во пользователей (передаётся через main)
public:
	Chat(int n);
	~Chat();
	void getChat();
	void enter();
	void registration();
	void sendPrivateMessage();
	void sendPublicMessage();
};