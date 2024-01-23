#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 0;
    if (n == 0)
        cout << 1 << endl;
    int result = log2(n) + 1;
    cout << result << endl;
    int a = pow(2, result) - 1;
    cout << (~n & a);
    return 0;
}
