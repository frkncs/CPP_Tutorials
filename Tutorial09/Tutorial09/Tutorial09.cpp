#include <iostream>

// DYNAMIC MEMORY ALLOCATION

using namespace std;

int main()
{
	/*int* p = new int;

	*p = 15;

	cout << p << endl;
	cout << *p << endl;

	delete p;

	cout << p << endl;*/

begin:

	char selection;
	unsigned int sizeOfArray;

	cout << "Enter size of array: ";
	cin >> sizeOfArray;

	string* p = new (nothrow) string[sizeOfArray]; // string is bigger than other types. So this will easy to see in Task Manager

	if (p == NULL)
	{
		cout << "Not enough memory!" << endl;
		return 0;
	}

	cout << "Memory will be free. Type anything to continue...: ";
	cin >> selection;

	delete[] p;

	goto begin;

	return 0;
}