#pragma once
#include <iostream>
#include "Users.h"

class Message
{
private:
	std::string _message; // сообщение
	
public:
	Message(); // конструткор
	~Message(); // деструктор
	void setMessage(); //  ввод сообщения
	void getMessage(); // вывод сообщения
};