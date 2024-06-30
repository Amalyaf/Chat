#include <iostream>
#include "Chat.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int count;
	cout << "������� ���-�� �������������:\n";
	cin >> count;
	Chat chat(count);
	for (int i = 0; i < count; i++)
	{
		chat.registration();
	}
	chat.getChat();
	chat.enter();
	
	
	char c = 'y';
	while (c != 'n')
	{
		char message;
		cout << "������ ��������� ���������?(y/n)\n";
		cin >> c;

		if (c == 'y')
		{
			cout << "�������� ��� ������������� ���������: 1-private, 2-public\n";
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
				cout << "������������ ����!";
				break;
			}
		}
	}
	
	chat.enter();

}  