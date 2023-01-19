#include <iostream>

using namespace std;

int main() {

	string name, surname;
	int age;

	int num1, num2;

	cout << "Name: ";
	cin >> name;

	cout << "Surname: ";
	cin >> surname;

	cout << "Age: ";
	cin >> age;

	cout << "Enter Number 1: ";
	cin >> num1;

	cout << "Enter Number 2: ";
	cin >> num2;

	cout << endl << "Hello " << name << " " << surname << ". You are " << age << " years old." << endl;
	cout << "Sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;

	return 0;
}