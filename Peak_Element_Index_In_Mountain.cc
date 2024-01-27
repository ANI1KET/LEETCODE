#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int peakElementIndexMountain(vector<int> &nums)
{
    int count = 0;
    int n = nums.size();
    int i;

    for (i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            break;
        }
    }
    return nums[i - 1];
}

// int peakElementIndexMountain(vector<int> &nums)
// {
//     int l = 0;
//     int r = nums.size() - 1;
//     int m = 0;

//     while (l < r)
//     {
//         m = l + ((r - l) / 2);
//         if (nums[m] < nums[m + 1])
//         {
//             l = m + 1;
//         }
//         else
//         {
//             r = m;
//         }
//     }
//     return l;
// }

int main()
{
    vector<int> a = {0, 1, 5, 2, 3};
    int b = peakElementIndexMountain(a);

    cout << b;
    return 0;
}
