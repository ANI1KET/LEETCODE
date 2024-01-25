#include <iostream>
#include <vector>

using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    // vector<int> ans;

    // for (int i = 0; i < nums2.size(); i++)
    // {
    //     cout << nums2[i] << " ";
    //     int element = nums2[i];

    //     for (int j = 0; j < nums1.size(); j++)
    //     {
    //         cout << nums2[i] << " ";
    //         if (element == nums1[j])
    //         {
    //             ans.push_back(element);
    //             nums1[j] = -1;
    //             break;
    //         }
    //     }
    // }
    // return ans;

    int arr[1001] = {0};
    int brr[1001] = {0};

    vector<int> ans;
    for (int i = 0; i < nums1.size(); i++)
    {
        arr[nums1[i]]++;
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        brr[nums2[i]]++;
    }
    for (int i = 0; i <= 1000; i++)
    {
        if (arr[i] > 0 && brr[i] > 0)
        {
            int m = min(arr[i], brr[i]);
            while (m > 0)
            {
                m--;
                ans.push_back(i);
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> ans;
    vector<int> a = {4, 9, 9, 5}, b = {9, 4, 9, 8, 4};
    ans = intersection(a, b);
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
