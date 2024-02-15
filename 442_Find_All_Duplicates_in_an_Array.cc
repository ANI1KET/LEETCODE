// class Solution
// {
// public:
//     vector<int> findDuplicates(vector<int> &nums)
//     {
//         vector<int> ans;
//         for (int n : nums)
//         {
//             n = abs(n);
//             if (nums[n - 1] > 0)
//                 nums[n - 1] *= -1;
//             else
//                 ans.push_back(n);
//         }
//         return ans;
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

vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> ans;
    for (int n : nums)
    {
        n = abs(n);
        if (nums[n - 1] > 0)
            nums[n - 1] *= -1;
        else
            ans.push_back(n);
    }
    return ans;
}

int main()
{
    vector<int> a = {4, 3, 2, 7, 8, 2, 3, 1};

    a = findDuplicates(a);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
