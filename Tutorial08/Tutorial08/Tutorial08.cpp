#include <iostream>

// POINTERS
// Pointers are ordinary variables that can store addresses of variables

using namespace std;

int main()
{
	int var = 13;

	cout << "Address of 'var': " << &var << endl;

	// if we want to make outr pointer constant. We need to add const keyword. Otherwise, out varP pointer can change
	int* const varP = &var; // This asterisk is used to INFORM about this variable is a POINTER

	cout << "'varP' value: " << varP << endl;

	cout << "'var' value: " << var << endl;
	cout << "Value at 'varP's address: " << *varP << endl; // This asterisk is used to GET value from given address in our memory.

	cout << endl;

	*varP = 55;

	cout << "'var' value: " << var << endl;
	cout << "Value at 'varP's address: " << *varP << endl;

	cout << endl;

	var = 30;

	cout << "'var' value: " << var << endl;
	cout << "Value at 'varP's address: " << *varP << endl;

	return 0;
}