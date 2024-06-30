#include <iostream>
#include "Chat.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int count;
	cout << "Введите кол-во пользователей:\n";
	cin >> count;
	Chat chat(count);
	for (int i = 0; i < count; i++)
	{
		chat.registration();
	}
	chat.getChat();
	
	
	
	
	chat.enter();
	if (chat.getstatus()) // проверяем был ли выполнен вход
	{
		char c = 'y';
		while (c != 'n')
		{
			char message;
			cout << "Хотите отправить сообщение?(y/n)\n";
			cin >> c;

			if (c == 'y')
			{
				cout << "Выберите тип отправляемого сообщения: 1-private, 2-public\n";
				cin >> message;
				switch (message)
				{
				case '1':
					chat.sendPrivateMessage();
					break;
				case '2':
					chat.sendPublicMessage();
					break;
				default:
					cout << "Некорректный ввод!";
					break;
				}
			}
			if (c == 'n')
			{
				cout << "Хотите выполнить вход под другой учетной записью?(y/n)\n";
				cin >> c;
				if (c == 'y')
				{
					chat.enter();
				}
			}
		}

	}
	else
	{
		cout << "Вход не выполнен!\n";
	}
}  