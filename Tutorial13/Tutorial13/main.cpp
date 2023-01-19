#include <iostream>
#include "HeaderFiles/Tutorial13.h"

#define PI 3.14

using namespace std;

// PREPROCESSOR DIRECTIVES AND MULTI FILE PROJECT

// Advantage of working with multi files, if we have a big project, we can build only file that we changed, and out program will still working.
// It saves a lot of compile time.
// Second advantage of this: Organization

int main()
{
	cout << PI << endl;
	cout << number << endl;

	ShowHelp();

	return 0;
}