#include <iostream>

using namespace std;

enum DaysOfWeek
{
	Mon,
	Tue,
	Wed,
	Thu,
	Fri,
	Sat,
	Sun
};

int main()
{
	int indexOfDay;
	DaysOfWeek selectedDay = DaysOfWeek::Mon;

	cout << "Select day of week: ";
	cin >> indexOfDay;

	selectedDay = DaysOfWeek(indexOfDay);

	cout << "\nSelected day is: " << selectedDay << endl;

	return 0;
}