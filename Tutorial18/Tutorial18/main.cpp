#include <iostream>

using namespace std;

// FUNCTION TEMPLATES
// We can do same thing for classes

template<typename T1, typename T2>
T1 SumTwoNumbers(T1 num1, T2 num2)
{
	return num1 + num2;
}

int main()
{
	cout << SumTwoNumbers(1, 3.4) << endl; // It will return as Integer, because we returning type of first value
	cout << SumTwoNumbers<double>(1, 3.4) << endl; // We can specify what types are gonna be
	cout << SumTwoNumbers<double, int>(1, 3.4) << endl; // We can specify what types are gonna be

	return 0;
}