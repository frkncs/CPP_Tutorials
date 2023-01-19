#include <iostream>

using namespace std;

// USING PROGRAM VIA CMD

void ShowHelp();
void ShowUsername(char* username);

int main(int argc, char* argv[])
{
	// We can write arguments from cmd (Like: Tutorial12.exe -h -a sdsadasdasd -b gbdbdfvdfv)

	// argc: arguments counter
	// argv: arguments values

	// Where "char* argv[]" come from?;
	char a[] = { 'a', 'b', 'c', 'd', '\0' };
	const char* b = "This is a test";
	const char* c[] = { "String01", "SecondString", "Thirdd", "And Fourth!"}; // -> We combined sequence of characters (char*) and array of char (char a[]) and result: char* a[]

	//cout << a << endl;		//	Output:	abcd					->	This is char array, it can only contains one character
	//cout << b << endl;		//	Output:	This is a test			->	This is sequence of characters, it can contains like string (const char)
	//cout << c[2] << endl;		//	Output:	Thirdd					->	We can array of sequence of characters (strings)
	//

	cout << endl << "Argument Count: " << argc << endl << endl;

	for (int i = 0; i < argc; i++)
	{
		if (!argv[i])
		{
			// IDE warn us if we not check that
			// Warning code: C28183
			continue;
		}

		if (i == 1 && strcmp(argv[i], "-h") == 0) // if we have -h parameter, it will return 0
		{
			// I want to use -h parameter as first value so i check if i == 1 (first parameter)
			ShowHelp();
		}
		if (strcmp(argv[i], "-u") == 0) // We need parameter for "u" like: -u john_ww2
		{
			if (argv[i + 1])
			{
				ShowUsername(argv[i + 1]);
			}
			else
			{
				cout << "You have to enter username, bitch!" << endl;
			}
		}
	}

	cout << endl << "Program ended!" << endl;

	return 0;
}

void ShowHelp()
{
	// INSTRUCTION

	cout << "This is instruction of our program" << endl;
}

void ShowUsername(char* username)
{
	cout << "Entered Username: " << username << endl;
}