#include <iostream>

using namespace std;

// For make abstract class we define at least one function as virtual = 0

class Test
{
public:
	int x;

public:
	virtual ~Test() // If we not do this constructor as virtual function, when we create a variable with this type and assign one of our sub-classes
		// we can't destroy our sub-class
	{
		cout << "Destructor of Test Class Called..." << endl;
	}
	virtual void FunctionForTesting() = 0;
};

class Test2 : public Test
{
public:
	void FunctionForTesting()
	{
		cout << "Test2 Class Function Called..." << endl;
	}

	~Test2()
	{
		cout << "Destructor of Test2 Class Called..." << endl;
	}
};

int main()
{
	// Test t1; // We can't decleare this because it's abstract

	//Test2 t2;
	//t2.FunctionForTesting();

	Test* t2_1 = new Test2;
	delete t2_1; // We can't destroy our Test2 class if we not do ~Test() function virtual
}