#include "Chat.h"

Chat::Chat(int n)
{
	_maxcount = n;
	_allUsers = new Users[_maxcount]{};
}

Chat::~Chat()
{
	delete[]_allUsers;
}

void Chat::registration()
{
	char c = 'y';
	int i;
	if (_count < _maxcount)
	{
		while (c != 'n')
		{
			std::cout << "����������� ������ ������������\n";
			_allUsers[_count].setUser();
			for (i = 0; i < _count; i++)
			{
				if (_allUsers[_count].getLogin() == _allUsers[i].getLogin())
				{
					std::cout << "������������ � ����� ������� ��� ����������!\n������ ��������� �������?(y/n)";
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
		std::cout << "���������������� ������������ ���-�� �������������!\n";
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
		std::cout << "��� ����� ������� �����: \n";
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
			std::cout << "������������ �� ������!\n������ ��������� ����?(y/n): ";
			std::cin >> c;
		}
		else
		{
			std::cout << "������� ������: \n";
			std::cin >> _password;

			if (_password != _allUsers[i].getPassword())
			{
				std::cout << "������������ ������!\n������ ��������� ����?(y/n): ";
				std::cin >> c;
			}
			else
			{
				c = 'n';
				if (_login == _recipient)
				{
					std::cout << "� ��� ���� ����� ���������: ";
					_privateMessage->getMessage();
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
		std::cout << "����: ";
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
			std::cout << "���������� �� ������!\n������ ��������� �������?(y/n)";
			std::cin >> c;
		}
		else
		{
			std::cout << "������� ���������:\n";
			_privateMessage = new Message;
			_privateMessage->setMessage();
			c = 'n';
		}
	}
	
	
}
