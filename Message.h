#pragma once
#include <iostream>
#include <string>

template <typename T> class Message
{
private:
	T _message; // сообщение
	
public:
	Message() // конструткор
	{
		_message = "-";
	}
	~Message() // деструктор
	{

	}
	void setMessage() //  ввод сообщения
	{
		std::cin.get(); // убирает оставшийся в потоке символ перехода на новую строку
		std::getline(std::cin, _message);
	}
	void getMessage() // вывод сообщения
	{
		std::cout << _message;
	}
};