// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//     vector<int> a(m + n);
//     int i = 0, j = 0, k = 0;

//     while (i < m && j < n)
//     {
//         if (nums1[i] < nums2[j])
//         {
//             a[k] = nums1[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             a[k] = nums2[j];
//             j++;
//             k++;
//         }
//     }

//     while (i < m)
//     {
//         a[k] = nums1[i];
//         i++;
//         k++;
//     }

//     while (j < n)
//     {
//         a[k] = nums2[j];
//         j++;
//         k++;
//     }

//     nums1 = a;
//     }
// };

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> a(m + n);
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            // cout << "1 " << endl;
            // a.push_back(nums1[i]);
            a[k] = nums1[i];
            i++;
            k++;
        }
        else
        {
            // cout << "2 " << endl;
            // a.push_back(nums2[j]);
            a[k] = nums2[j];
            j++;
            k++;
        }
    }

    while (i < m)
    {
        a[k] = nums1[i];
        i++;
        k++;
    }

    while (j < n)
    {
        a[k] = nums2[j];
        j++;
        k++;
    }

    nums1 = a;
    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }
}

int main()
{
    vector<int> a = {1, 2, 3, 0, 0, 0};
    vector<int> b = {2, 5, 6};

    merge(a, 3, b, 3);

    return 0;
}
