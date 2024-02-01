// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//     int n = nums.size();
//     vector<int> a(n);

//     for (int i = 0; i < n; i++)
//     {
//         a[(i + k) % n] = nums[i];
//     }

//     nums = a;
//     }
// };

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        a[(i + k) % n] = nums[i];
    }

    nums = a;

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(a, k);

    return 0;
}
