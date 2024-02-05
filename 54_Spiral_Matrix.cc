// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//     vector<int> ans;
//     int row = matrix.size();
//     int col = matrix[0].size();

//     int count = 0;
//     int total = row * col;

//     int startingRow = 0;
//     int startingCol = 0;
//     int endingRow = row - 1;
//     int endingCol = col - 1;

//     while (count < total)
//     {
//         for (int index = startingCol; count < total && index <= endingCol; index++)
//         {
//             ans.push_back(matrix[startingRow][index]);
//             count++;
//         }
//         startingRow++;

//         for (int index = startingRow; count < total && index <= endingRow; index++)
//         {
//             ans.push_back(matrix[index][endingCol]);
//             count++;
//         }
//         endingCol--;

//         for (int index = endingCol; count < total && index >= startingCol; index--)
//         {
//             ans.push_back(matrix[endingRow][index]);
//             count++;
//         }
//         endingRow--;

//         for (int index = endingRow; count < total && index >= startingRow; index--)
//         {
//             ans.push_back(matrix[index][startingCol]);
//             count++;
//         }
//         startingCol++;
//     }
//     return ans;
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

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {
        for (int index = startingCol; count < total && index <= endingCol; index++)
        {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        for (int index = startingRow; count < total && index <= endingRow; index++)
        {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        for (int index = endingCol; count < total && index >= startingCol; index--)
        {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        for (int index = endingRow; count < total && index >= startingRow; index--)
        {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> a = {{10, 40, 70},
                             {20, 50, 80},
                             {30, 60, 90}};

    vector<int> b = spiralOrder(a);
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}
