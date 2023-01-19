#include <iostream>

using namespace std;

// REFERENCE VARIABLES

void Swap(int&, int&);

int main()
{
	string variable1 = "String 01";
	string& variable2 = variable1;

	cout << variable1 << endl;
	cout << variable2 << endl;

	variable2 = "String 02";

	cout << variable1 << endl;
	cout << variable2 << endl;

	variable1 = "String 03";

	cout << variable1 << endl;
	cout << variable2 << endl;

	int num1 = 10;
	int num2 = 20;

	cout << endl;

	cout << num1 << endl;
	cout << num2 << endl;

	Swap(num1, num2);

	cout << endl;

	cout << num1 << endl;
	cout << num2 << endl;

	return 0;
}

void Swap(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}