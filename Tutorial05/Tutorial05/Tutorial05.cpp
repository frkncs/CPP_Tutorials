#include <iostream>

using namespace std;

bool IsEven(int numberToCheck);

int main()
{
	char continueChar = 'y';

	while (continueChar != 'n' && continueChar != 'N')
	{
		system("cls");

		int numToCheckIsEven;

		cout << "Enter number for check is even: ";

		cin >> numToCheckIsEven;

		cout << endl;
		cout << (IsEven(numToCheckIsEven) ? "Number is even" : "Number is not even") << endl;
		cout << endl;

		cout << "You want to continue? Y/N: ";
		cin >> continueChar;
	}

	return 0;
}

bool IsEven(int numberToCheck)
{
	return numberToCheck % 2 == 0;
}