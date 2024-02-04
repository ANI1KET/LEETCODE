// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int row = matrix.size();
//         int col = matrix[0].size();

//         for (int i = 0; i < row; i++)
//         {
//             for (int j = 0; j <= i; j++)
//             {
//                 swap(matrix[i][j], matrix[j][i]);
//             }
//         }
//         for (int i = 0; i < row; i++)
//         {
//             reverse(matrix[i].begin(), matrix[i].end());
//         }
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

void rotate(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
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

    rotate(a);

    return 0;
}
