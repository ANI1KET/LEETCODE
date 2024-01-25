// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <cmath>

// using namespace std;
// int n = 0;

// int leftOccurence(vector<int> &nums, int target)
// {
//     int l = 0;
//     int r = nums.size() - 1;
//     int m = 0;
//     int ans = -1;

//     while (l <= r)
//     {
//         n++;
//         m = l + ((r - l) / 2);
//         if (nums[m] == target)
//         {
//             ans = m;
//             r = m - 1;
//         }
//         else if (nums[m] < target)
//         {
//             l = m + 1;
//         }
//         else
//         {
//             r = m - 1;
//         }
//     }
//     return ans;
// }

// int rightOccurence(vector<int> &nums, int target)
// {
//     int l = 0;
//     int r = nums.size() - 1;
//     int m = 0;
//     int ans = -1;

//     while (l <= r)
//     {
//         n++;
//         m = l + ((r - l) / 2);
//         if (nums[m] == target)
//         {
//             ans = m;
//             l = m + 1;
//         }
//         else if (nums[m] < target)
//         {
//             l = m + 1;
//         }
//         else
//         {
//             r = m - 1;
//         }
//     }
//     return ans;
// }

// vector<int> searchRange(vector<int> &nums, int target)
// {
//     // for (int i = 0; i < nums.size(); i++)
//     // {
//     //     cout << nums[i] << " ";
//     // }

//     // cout << endl;

//     vector<int> c;
//     c.push_back(leftOccurence(nums, target));
//     c.push_back(rightOccurence(nums, target));

//     return c;
// }

// int main()
// {
//     vector<int> a = {5, 7, 7, 7, 8, 8, 8, 9, 10, 10, 11, 12, 13, 15, 16, 16, 16};
//     vector<int> b = searchRange(a, 8);

//     for (int i = 0; i < b.size(); i++)
//     {
//         cout << b[i] << " ";
//     }
//     cout << endl
//          << n;
//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
int n = 0;

int leftOccurence(vector<int> &nums, int target, int m)
{
    int i = 1;
    while ((m - i) >= 0 && nums[m - i] == target)
    {
        n++;
        i++;
    }
    return m - i + 1;
}

int rightOccurence(vector<int> &nums, int target, int m)
{
    int i = 1;
    while ((m + i) < nums.size() && nums[m + i] == target)
    {
        n++;
        i++;
    }
    return m + i - 1;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     cout << nums[i] << " ";
    // }

    // cout << endl;

    vector<int> c;

    int l = 0;
    int r = nums.size() - 1;
    int m = 0;

    while (l <= r)
    {
        n++;
        m = l + ((r - l) / 2);

        if (nums[m] == target)
        {
            c.push_back(leftOccurence(nums, target, m));
            c.push_back(rightOccurence(nums, target, m));
            return c;
        }
        else if (nums[m] < target)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    c.push_back(-1);
    c.push_back(-1);
    return c;
}

int main()
{
    vector<int> a = {5, 7, 7, 7, 8, 8, 8, 9, 10, 10, 11, 12, 13, 15, 16, 16, 16};
    vector<int> b = searchRange(a, 8);

    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << endl
         << n;
    return 0;
}
