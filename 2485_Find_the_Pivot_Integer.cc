// class Solution
// {
// public:
//     int pivotInteger(int n)
//     {
//         if (n == 1)
//             return 1;

//         int rightSum = (n * (n + 1)) / 2;

//         int leftSum = 0;
//         for (int idx = 0; idx < n; idx++)
//         {
//             rightSum -= idx;
//             if (leftSum == rightSum)
//                 return idx;
//             leftSum += idx;
//         }
//         return -1;
//     }
// };

// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <cstring>
// #include <cctype>
// #include <string>
// #include <cmath>

// using namespace std;

// int pivotInteger(int n)
// {
//     if (n == 1)
//         return 1;

//     int rightSum = (n * (n + 1)) / 2;

//     int leftSum = 0;
//     for (int idx = 0; idx < n; idx++)
//     {
//         rightSum -= idx;
//         if (leftSum == rightSum)
//             return idx;
//         leftSum += idx;
//     }
//     return -1;
// }

// int main()
// {
//     int a = 7;

//     int b = pivotInteger(a);
//     cout << "Pivot Integer : " << b << endl;

//     return 0;
// }
