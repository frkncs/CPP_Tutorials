#include <iostream>

using namespace std;

int main() {

	/*
	Bitwise AND	-	&	Just matched (in 1) values
	Bitwise OR	-	|	Only one 1 value
	Bitwise NOT	-	~	
	Bitwise XOR	-	^	Only must one 1 value
	Bitwise left shift	-	<<
	Bitwise right shift	-	>>
	*/

	cout << (10 & 4) << endl;

	/*
	It writes 0 because it looks same binary;

	1 0 1 0	= 10
	0 1 0 0	= 4
	------------
	0 0 0 0	= 0
	*/

	cout << (10 | 4) << endl;

	/*
	It writes 14 because it looks just 1 value;

	1 0 1 0	= 10
	0 1 0 0	= 4
	------------
	1 1 1 0	= 14
	*/
	

	cout << (~10) << endl;

	/*
	It writes 9 because it looks only one 1 value;

	Even we don't write this huge zeros, there are zeros like this. And all of that are changing to 1
	
	000000000000000000000000000000000000000 1 0 1 0	= 10
	111111111111111111111111111111111111111 0 1 0 1 = 5
	*/

	cout << (10 << 3) << endl; // we are multiplying 10 by 2 rasied to the power of 3

	/*
		10 * (2 ^ 3) = 10 * 8 = 80
	*/

	cout << (10 >> 1) << endl; // we are dividing 10 by 2 rasied to the power of 1

	/*
		10 / (2 ^ 1) = 10 / 2 = 5
	*/

	return 0;
}