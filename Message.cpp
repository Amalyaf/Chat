#include "Message.h"

Message::Message()
{
	_message = "-";
}

Message::~Message()
{

}

void Message::setMessage()
{
	std::cin >> _message;
}

void Message::getMessage()
{
	std::cout << _message;
}
