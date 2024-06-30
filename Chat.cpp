#include "Chat.h"

Chat::Chat(int n)
{
	_maxcount = n;
	_allUsers = new Users[_maxcount]{};
}

Chat::~Chat()
{
	delete[]_allUsers;
	delete _privateMessage; // личные сообщения
	delete _publicMessage;
}

void Chat::registration()
{
	char c = 'y';
	int i;
	if (_count < _maxcount)
	{
		while (c != 'n')
		{
			std::cout << "Регистрация нового пользователя\n";
			_allUsers[_count].setUser();
			for (i = 0; i < _count; i++)
			{
				if (_allUsers[_count].getLogin() == _allUsers[i].getLogin())
				{
					std::cout << "Пользователь с таким логином уже существует!\nХотите повторить попытку?(y/n)";
					std::cin >> c;
					break;
				}
			}

			if (i == _count)
			{
				_count++;
				c = 'n';
			}
		}
		
	}
	else
	{
		std::cout << "Зарегистрировано максимальное кол-во пользователей!\n";
	}
	
}

void Chat::getChat()
{
	for (int i = 0; i < _maxcount; i++)
	{
		std::cout << _allUsers[i];
	}
}

void Chat::enter()
{
	char c = 'y';
	int i;
	while (c != 'n')
	{
		std::cout << "Для входа введите логин: \n";
		std::cin >> _login;
		for (i = 0; i < _maxcount; i++)
		{
			if (_login == _allUsers[i].getLogin())
			{
				break;
			}
		}
		if (i == _maxcount)
		{
			std::cout << "Пользователь не найден!\nХотите повторить ввод?(y/n): ";
			std::cin >> c;
		}
		else
		{
			std::cout << "Введите пароль: \n";
			std::cin >> _password;

			if (_password != _allUsers[i].getPassword())
			{
				std::cout << "Неправильный пароль!\nХотите повторить ввод?(y/n): ";
				std::cin >> c;
			}
			else
			{
				_status = true;
				c = 'n';
				if (_login == _recipient)
				{
					std::cout << "У вас есть новое личное сообщение: ";
					_privateMessage->getMessage();
				}
				if (_recipient == "all")
				{
					std::cout << "У вас есть новое общее сообщение: ";
					_publicMessage->getMessage();
					std::cout << "\n";
				}
					
			}
		}
	}
	
}


void Chat::sendPrivateMessage()
{
	char c = 'y';
	int i;
	_sender = _login;
	while (c != 'n')
	{
		std::cout << "Кому: ";
		std::cin >> _recipient;
		for (i = 0; i < _count; i++)
		{
			if (_recipient == _allUsers[i].getLogin())
			{
				break;
			}
		}
		if (i == _count)
		{
			std::cout << "Получатель не найден!\nХотите повторить попытку?(y/n)";
			std::cin >> c;
		}
		else
		{
			std::cout << "Введите сообщение:\n";
			_privateMessage = new Message;
			_privateMessage->setMessage();
			c = 'n';
		}
	}
	
	
}

void Chat::sendPublicMessage()
{
	_sender = _login;
	_recipient = "all";
	std::cout << "Введите групповое сообщение:\n";
	_publicMessage = new Message;
	_publicMessage->setMessage();

}

bool Chat::getstatus()
{
	return _status;
}
