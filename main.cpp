#include <iostream>
#include "Users.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	Users u1(5);
	for (int i = 0; i < u1.getMaxcount(); i++)
	{
		u1.setUser();
	}
	
	cout << u1;

}  