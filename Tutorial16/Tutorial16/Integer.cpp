#include "Integer.h"

Integer::Integer()
{
}

Integer::Integer(int value)
{
	this->value = value;
}

int Integer::GetValue()
{
	return value;
}

// We say: If this class casting an integer, return value variable
Integer::operator int()
{
	return value;
}

// We say: If this class's variable using with += operator, we can get other variable and add them together
int Integer::operator+=(Integer otherValue)
{
	value = value + otherValue.GetValue();
	return value;
}