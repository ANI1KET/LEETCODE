// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int r = 0,n = nums.size();

//         for (int l = 0; l < n; l++)
//         {
//             if (nums[l] != 0)
//             {
//                 nums[r] = nums[l];
//                 r++;
//             }
//         }
//         for(int k = r ; k<n ;k++)
//         {
//             nums[k] = 0;
//         }
//     }
// };

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int r = 0,n = nums.size();

//         for (int l = 0; l < n; l++)
//         {
//             if (nums[l] != 0)
//             {
//                 swap(nums[r], nums[l]);
//                 r++;
//             }
//         }
//     }
// };

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

// void pushZerosAtEnd(vector<int> &arr)
// {
//     int l = 0, r = 0;

//     while (r < arr.size())
//     {
//         if (arr[r] != 0)
//         {
//             swap(arr[r], arr[l]);
//             r++;
//             l++;
//         }
//         else
//             r++;
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// void pushZerosAtEnd(vector<int> &arr)
// {
//     int l = 0, r = 0;

//     while (l < arr.size())
//     {
//         if (arr[l] != 0)
//         {
//             swap(arr[r], arr[l]);
//             r++;
//         }
//         l++;
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

void pushZerosAtEnd(vector<int> &nums)
{
    int r = 0;

    for (int l = 0; l < nums.size(); l++)
    {
        if (nums[l] != 0)
        {
            swap(nums[r], nums[l]);
            r++;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    // vector<int> a = {1, 1, 0, 2, 0};
    // vector<int> a = {1, 2, 0, 0, 1, 2};
    vector<int> a = {1, 2, 0, 0, 2, 1};

    pushZerosAtEnd(a);

    return 0;
}
