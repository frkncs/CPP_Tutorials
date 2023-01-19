#include <iostream>
#include "Integer.h"

using namespace std;

int main()
{
    Integer a = Integer(5);
    Integer b(77);

    cout << a << endl;
    cout << b << endl;

    Integer c = Integer(18);
    c += Integer(7); // 25
    c += 5; // 30

    cout << c << endl;
}