#pragma once
#include <iostream>
#include <string>

template <typename T> class Message
{
private:
	T _message; // ���������
	
public:
	Message() // �����������
	{
		_message = "-";
	}
	~Message() // ����������
	{

	}
	void setMessage() //  ���� ���������
	{
		std::cin.get(); // ������� ���������� � ������ ������ �������� �� ����� ������
		std::getline(std::cin, _message);
	}
	void getMessage() // ����� ���������
	{
		std::cout << _message;
	}
};