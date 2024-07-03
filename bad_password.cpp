#include "bad_password.h"

const char* BadPassword::what() const
{
	return "Исключение!!! Неправильный пароль!\nХотите повторить ввод?(y/n): ";;
}
