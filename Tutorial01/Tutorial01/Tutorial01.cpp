// IOStream stands for: Input - Output Stream

#include <iostream>

using namespace std;

int main() {

	
	/*
	short: 2 byte
	float: 4 byte
	double: 8 byte
	char: 1 byte
	*/

	short shortVariable = 5;					// 2 byte	// -32767 to 36767
	float floatVariable = 75.4;					// 4 byte
	int intVariable = 5468;						// 4 byte	// 2147483648 to 2147483647
	double doubleVariable = 78.66545;			// 8 byte
	char charVariable = 'A';					// 1 byte
	string stringVariable = "String Variable";	// Depends text lenght. This is 15 byte
	bool boolVariable = true;					// 1 byte
	unsigned short unsignedShorVariable = 3542;	// 2 byte	// 0 to 65535 sum of short ranges
	unsigned int sdjfvsldfv = 654321;			// 4 byte	// 0 to 4294967295 sum of int ranges

	return 0;
}