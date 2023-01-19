#pragma once
class Integer
{
	int value;

public:
	Integer();
	Integer(int value);
	operator int();
	int operator +=(Integer);

	int GetValue();
};

