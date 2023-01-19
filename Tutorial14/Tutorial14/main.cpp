#include <iostream>

using namespace std;

// STRUCT

struct PersonalData // We can add typedef keyword before struct keyword if we want. But this is unnecessary in C++
{
	string name;
	string surname;
	string phoneNumber;
	short age;
};

int main()
{
	PersonalData person[5];
	person[0].name = "John";
	person[0].surname = "Kennedy";
	person[0].age = 45;
	person[0].phoneNumber = "6854215444";

	person[1].name = "Osama Bin";
	person[1].surname = "Ladin";
	person[1].age = 55;
	person[1].phoneNumber = "145745911";

	cout << person[0].name << endl;
	cout << (*person).surname << endl;
	cout << (*(&person[0])).age << endl;
	cout << person->phoneNumber << endl;

	cout << endl;

	cout << person[1].name << endl;
	cout << (*(person + 1)).surname << endl;
	cout << (*(&person[1])).age << endl;
	cout << (person + 1)->phoneNumber << endl;

	PersonalData* person2 = new PersonalData();
	person2->name = "Adolf";
	person2->surname = "Hitler";
	person2->age = 48;
	person2->phoneNumber = "1422564853";

	cout << endl;

	cout << person2->name << endl;
	cout << person2->surname << endl;
	cout << person2->age << endl;
	cout << person2->phoneNumber << endl;

	return 0;
}