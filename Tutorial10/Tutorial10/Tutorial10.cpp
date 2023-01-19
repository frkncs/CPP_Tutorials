#include <iostream>

// FUNCTIONS AND POINTERS

using namespace std;


void Multiply(int* value, int valueToMultiply); // It'll multiply pointer's value by int value
void MultiplyArrayItems(int array[], int arraySize, int valueToMultiply); // We can use in* instead of []
// In C++ array size must give as parameter

int main()
{
	// For property
	int a = 10;

	cout << a << endl;

	Multiply(&a, 5);

	cout << a << endl;
	//
	
	// For array
	cout << endl;

	int array[6];
	
	int arraySize = sizeof(array) / sizeof(array[0]);

	for (int i = 0; i < arraySize; i++)
	{
		array[i] = i + 1;
		cout << array[i] << endl;
	}

	MultiplyArrayItems(array, arraySize, 5);

	cout << endl;

	for (int i = 0; i < arraySize; i++)
	{
		cout << array[i] << endl;
	}
	//

	return 0;
}

void Multiply(int* numberRef, int valueToMultiply)
{
	*numberRef *= valueToMultiply;
}

void MultiplyArrayItems(int array[], int sizeOfArray, int valueToMultiply)
{
	for (int i = 0; i < sizeOfArray; i++)
	{
		array[i] *= valueToMultiply;
	}
}