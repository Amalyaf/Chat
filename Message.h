#pragma once
#include <iostream>
#include "Users.h"

class Message
{
private:
	std::string _message;
	
public:
	Message();
	~Message();
	void setMessage();
	void getMessage();
};