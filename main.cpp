#include <iostream>
#include "Chat.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int count;
	cout << "¬ведите кол-во пользователей:\n";
	cin >> count;
	Chat chat(count);
	for (int i = 0; i < count; i++)
	{
		chat.registration();
	}
	
	
	chat.getChat();
	char c = 'y';
	while (c != 'n')
	{

	}
	chat.sendPrivateMessage();
	chat.enter();

}  