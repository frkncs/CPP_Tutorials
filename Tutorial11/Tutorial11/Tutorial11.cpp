#include <iostream>

using namespace std;

// TYPE CASTING

int main()
{

	double doubleVar = 47.68;

	cout << doubleVar << endl;

	// difference between (int) type casting and static_cast<int>() type casting;
	//https://stackoverflow.com/a/475831/12943954
	cout << (int)doubleVar << endl;
	cout << static_cast<int>(doubleVar)<< endl;

	char ch = 'l';

	cout << (int)ch << endl; // It prints dec value in ascii table

	// It can usable like this;

	cout << "Enter Character to Check Is Valid: ";
	cin >> ch;

	if ((int)ch >= 0 && (int)ch <= 127)
	{
		cout << "Valid!" << endl;
	}
	else
	{
		cout << "Not Valid!" << endl;
	}

	return 0;
}