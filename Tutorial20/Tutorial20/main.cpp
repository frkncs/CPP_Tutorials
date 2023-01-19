#include <iostream>

using namespace std;

namespace A
{
    int var = 15;
}

namespace B
{
    int var = 20;
}

using namespace A; // If we not do this, we cannot access var in A namespace without doing A::var
// Same thing like std

int main()
{
    // We can define variables with same name in different places.
    // We can use it for classes. So we can create more class with same name

    cout << var << endl; // It will return 15
    cout << B::var << endl; // It will return 20
    // We cannot do something like 'var' to get var in B namespace. Because we don't using it.

    return 0;
}