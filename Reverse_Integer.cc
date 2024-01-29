#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int a = 1534236469, b = 0;
    while (a != 0)
    {
        if (b > (INT_MAX / 10) || b < (INT_MIN / 10))
        // if ((b * 10) > INT_MAX || (b * 10) < INT_MIN)
        {
            cout << 0;
            return 0;
        }
        b = (b * 10) + (a % 10);
        a = a / 10;
    }
    cout << b << endl;
    cout << INT_MAX << endl;
    cout << INT_MIN;
}
