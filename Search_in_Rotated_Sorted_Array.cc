#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

// int binary_search(vector<int> nums, int l, int r, int target)
// {
//     while (l <= r)
//     {
//         int m = l + ((r - l) / 2);
//         if (target == nums[m])
//             return m;
//         else if (target > nums[m])
//             l = m + 1;
//         else
//             r = m - 1;
//     }
//     return -1;
// }

// int getPivotElement(vector<int> &nums)
// {
//     int l = 0;
//     int r = nums.size() - 1;
//     int m;
//     while (l < r)
//     {
//         m = l + ((r - l) / 2);
//         if (nums[m] >= nums[0])
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

// int search(vector<int> &nums, int target)
// {
//     // int l = 0;
//     // int r = nums.size() - 1;
//     // int m;
//     // while (l < r)
//     // {
//     //     m = l + ((r - l) / 2);
//     //     if (nums[m] >= nums[0])
//     //     {
//     //         l = m + 1;
//     //     }
//     //     else
//     //     {
//     //         r = m;
//     //     }
//     // }
//     // int pivot = l;

//     int pivot = getPivotElement(nums);
//     int l = 0;
//     int r = nums.size() - 1;

//     while (l <= r)
//     {
//         int m = l + ((r - l) / 2);
//         if (nums[m] == target)
//             return m;
//         else if (nums[pivot] == target)
//             return pivot;
//         else if (target <= nums[r] && target > nums[pivot])
//             return binary_search(nums, pivot + 1, r, target);
//         else
//             return binary_search(nums, l, pivot - 1, target);
//     }
//     return -1;
// }

int search(std::vector<int> &nums, int target)
{
    int low = 0, high = nums.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }

        if (nums[low] <= nums[mid])
        {
            if (nums[low] <= target && target < nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (nums[mid] < target && target <= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{
    vector<int> a = {4, 5, 6, 7, 8, 9, -2, -1, 0, 1, 2, 3};
    // vector<int> a = {1};
    int b = search(a, 8);

    cout << "Element to find is  " << a[b] << endl;
    cout << "Element is at index " << b << endl;
    return 0;
}
