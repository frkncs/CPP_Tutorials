#include <iostream>

using namespace std;

int main() {

	int num1, num2;

	cout << "Number 1: ";
	cin >> num1;

	cout << "Number 2: ";
	cin >> num2;

	cout << endl;

	if (num1 > num2) {
		cout << "Number 1 is greater than Number 2";
	}
	else if (num1 < num2) {
		cout << "Number 2 is greater than Number 1";
	}
	else {
		cout << "Number 1 and Number 2 is equal";
	}

	cout << endl;

	char value = 'Q';

	switch (value)
	{
	case 'Q':
		break;
	}


	return 0;
}