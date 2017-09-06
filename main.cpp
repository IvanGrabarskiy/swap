#include <iostream>
#include <string>
#include <sstream>
#include <typeinfo>
#include <math.h>
#include <cstdlib>

using namespace std;

int main()
{
    int a, b, c;
    a = 5;
    b = 7;
    c = a;
    cout << a << " " << b << endl;
    a = b;
    cout << a << " " << c << endl;

    return 0;
}
