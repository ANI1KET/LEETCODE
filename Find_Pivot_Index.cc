#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int pivotIndex(vector<int> &nums)
{
    int leftSum = 0, rightSum = nums.size() - 1, n = 0;
    while (leftSum <= rightSum)
    {
        if (leftSum == rightSum)
        {
            n += nums[leftSum];
        }
        else
        {
            n += nums[leftSum] + nums[rightSum];
        }
        leftSum++;
        rightSum--;
    }
    rightSum = n;
    leftSum = 0;
    for (int idx = 0; idx < nums.size(); idx++)
    {
        rightSum -= nums[idx];
        if (leftSum == rightSum)
            return idx;
        leftSum += nums[idx];
    }
    return -1;
}

int main()
{
    // vector<int> a = {2, 1, -1};
    // vector<int> a = {2, -1, 1};
    // vector<int> a = {-1, 1, 2};
    // vector<int> a = {1, -1, 2};
    // vector<int> a = {1, 2, 3};
    // vector<int> a = {1};
    // vector<int> a = {2, 2};
    // vector<int> a = {1, 7, 3, 6, 5, 6};
    vector<int> a = {-1, -1, -1, -1, -1, 0};

    int b = pivotIndex(a);
    cout << "Pivot Index : " << b << endl;
    cout << "Pivot Index : " << a[b] << endl;

    return 0;
}
