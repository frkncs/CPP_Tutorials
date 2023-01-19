#include <iostream>

using namespace std;

// EXCEPTIONS

class DividedByZeroException // We have to do is at another file but now i just want to create another file.
{
public:
    void ShowErrorMessage()
    {
        cout << "Error: Numbers cannot divided by zero! It's INFINITY!!!" << endl;
    }
};

float DivideTwoNumbers(float num1, float num2) throw(DividedByZeroException) // This means: This function throwing this type of error, you have to catch it
// If programmer not catch it program will broke. So we are helping programmer. He may can't notice
// We can define errors with comma. Like: throw(DividedByZeroException, SecondException, ThirdException)
{
    if (num2 == 0)
    {
        throw DividedByZeroException(); // We can throw exceptions inside functions
    }

    return num1 / num2;
}

int main()
{
    float result = 0;

    try
    {
        result = DivideTwoNumbers(5, 0);

        cout << "After throwing exception " << endl; // This will be not executing if there is an exception
    }
    catch (DividedByZeroException e)
    {
        e.ShowErrorMessage();
    }
    catch (...)
    {
        // This will be executing at every NOT CATCHED throwed exceptions
        cout << "Something broken in the program... Contact developers, if it's you, fix this shity program!" << endl;
    }

    cout << "Continue..." << endl; // This will always executing (If program not fucked up by unhandled exception)
    // But now we have a catch for handle all errors (catch (...)). So this line will be execute always

    return 0;
}