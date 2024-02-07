// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row = matrix.size();
//         int col = matrix[0].size();

//         int rowIndex = 0;
//         int colIndex = col - 1;

//         while (rowIndex < row && colIndex >= 0)
//         {
//             int element = matrix[rowIndex][colIndex];

//             if (element == target)
//             {
//                 return 1;
//             }

//             if (element < target)
//             {
//                 rowIndex++;
//             }
//             else
//             {
//                 colIndex--;
//             }
//         }
//         return 0;
//     }
// };

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row = matrix.size();
//         int col = matrix[0].size();

//         int start = 0;
//         int end  = row*col-1;

//         int mid = start + (end-start)/2;

//         while(start<=end) {

//             int element = matrix[mid/col][mid%col];

//             if(element == target) {
//                 return 1;
//             }

//             if(element < target) {
//                 start = mid+1;
//             }
//             else
//             {
//                 end = mid-1;
//             }
//             mid = start + (end-start)/2;
//         }
//         return 0;
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

// bool searchMatrix(vector<vector<int>> &matrix, int target)
// {
//     int row = matrix.size();
//     int col = matrix[0].size();

//     int start = 0;
//     int end = row * col - 1;

//     int mid = start + (end - start) / 2;

//     while (start <= end)
//     {

//         int element = matrix[mid / col][mid % col];

//         if (element == target)
//         {
//             return 1;
//         }

//         if (element < target)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return 0;
// }

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col - 1;

    while (rowIndex < row && colIndex >= 0)
    {
        int element = matrix[rowIndex][colIndex];

        if (element == target)
        {
            return 1;
        }
        if (element < target)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
    }
    return 0;
}

int main()
{
    // vector<vector<int>> a = {{1, 2, 3},
    //                          {4, 5, 6},
    //                          {7, 8, 9}};
    vector<vector<int>> a = {{5, 1, 9, 11},
                             {2, 4, 8, 10},
                             {13, 3, 6, 7},
                             {15, 14, 12, 16}};

    cout << searchMatrix(a, 8) << endl;

    return 0;
}
