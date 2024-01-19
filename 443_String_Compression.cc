// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         int i = 0;
//         int ansIndex = 0;
//         int n = chars.size();

//         while (i < n)
//         {
//             int j = i + 1;
//             while (j < n && chars[i] == chars[j])
//             {
//                 j++;
//             }

//             chars[ansIndex++] = chars[i];

//             int count = j - i;

//             if (count > 1)
//             {
//                 string cnt = to_string(count);
//                 for(char ch : cnt){
//                     chars[ansIndex++] = ch;
//                 }
//             }
//             i=j;
//         }

//         return ansIndex;
//     }
// };

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
#include <cmath>
#include <string>

using namespace std;

int compress(vector<char> &chars)
{
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();

    while (i < n)
    {
        int j = i + 1;
        while (j < n && chars[i] == chars[j])
        {
            j++;
        }

        chars[ansIndex++] = chars[i];

        int count = j - i;

        if (count > 1)
        {
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }

    return ansIndex;
}

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    // vector<char> chars = {'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};
    // vector<char> chars = {'a'};

    int a = compress(chars);
    cout << a << endl;

    for (int i = 0; i < a; i++)
    {
        cout << chars[i] << " ";
    }
    cout << endl;

    return 0;
}
