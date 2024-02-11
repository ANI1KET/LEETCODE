// class Solution
// {
// public:
//     int findDuplicate(vector<int> &nums)
//     {
//         int n = -1;
//         for (int n : nums)
//         {
//             n = abs(n);
//             if (nums[n - 1] > 0)
//                 nums[n - 1] *= -1;
//             else
//                 return n;
//         }
//         return n;
//     }
// };

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
#include <string>
#include <cmath>

using namespace std;

// int findDuplicate(vector<int> &nums)
// {
//     int ans = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         ans = ans ^ nums[i];
//     }
//     cout << ans << endl;
//     for (int i = 1; i < nums.size(); i++)
//     {
//         ans = ans ^ i;
//     }
//     return ans;

int findDuplicate(vector<int> &nums)
{
    int n = -1;
    for (int n : nums)
    {
        n = abs(n);
        if (nums[n - 1] > 0)
            nums[n - 1] *= -1;
        else
            return n;
    }
    return n;
}

int main()
{
    // vector<int> a = {1, 3, 4, 2, 2};
    vector<int> a = {2, 2, 2, 2, 2};

    cout << findDuplicate(a) << endl;

    return 0;
}
