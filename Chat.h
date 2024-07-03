#pragma once
#include <iostream>
#include "Message.h"

class Chat
{
private:
	std::string _recipient; //получатель сообщения
	std::string _sender; // отправитель сообщения
	Users* _allUsers; // все зарегистрированные пользователи
	std::string _login; // логин авторизованного пользователя
	std::string _password; // пароль авторизованного пользователя
	Message* _privateMessage; // личные сообщения
	Message* _publicMessage; // общие сообщения
	unsigned int _count = 0;	// кол-во пользователей
	unsigned int _maxcount = 0;	//максимально возможное кол-во пользователей (передаётся через main)
	bool _status = false; // если был выполнен вход статус = true, в противном случае - false.
public:
	Chat(int n); // конструктор
	~Chat(); // деструктор
	void getChat(); // метод выводит данные пользователя
	void enter(); // авторизация пользователя
	void registration(); //  регитстрация пользователя
	void sendPrivateMessage(); // отправка личных сообщений
	void sendPublicMessage(); // отправка публичных сообщений
	bool getstatus(); // метод выводит статус авторизации (_status)
	void exit(); // разлогинить авторизованного пользователя
};