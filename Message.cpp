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
	std::cin.get(); // убирает оставшийся в потоке символ перехода на новую строку
	std::getline(std::cin, _message);
}

void Message::getMessage()
{
	std::cout << _message;
}
