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
	chat.registration();
	chat.getChat();
	chat.sendPrivateMessage();
	chat.enter();
}  