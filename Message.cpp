#include "Message.h"
#include <string>

Message::Message()
{
	_message = "-";
}

Message::~Message()
{

}

void Message::setMessage()
{
	std::cin.get(); // ������� ���������� � ������ ������ �������� �� ����� ������
	std::getline(std::cin, _message);
}

void Message::getMessage()
{
	std::cout << _message;
}
