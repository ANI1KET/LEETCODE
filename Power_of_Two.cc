#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 0;
    if (n == 0)
        cout << 0 << endl;
    // double a = log2(abs(n));

    // double a = log2((n));
    // cout << (a == trunc(a));
    cout << (log2((n)) == trunc(log2((n))));
    return 0;
}
