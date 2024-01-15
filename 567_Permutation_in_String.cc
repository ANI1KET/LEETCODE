// class Solution {
// public:
//     bool checkEqual(int a[], int b[])
//     {
//         for (int i = 0; i < 26; i++)
//         {
//             if (a[i] != b[i])
//                 return 0;
//         }
//         return 1;
//     }

//     bool checkInclusion(string s1, string s2)
//     {
//             int count1[26] = {0};

//         for (int i = 0; i < s1.length(); i++)
//         {
//             int index = s1[i] - 'a';
//             count1[index]++;
//         }

//         int i = 0;
//         int windowSize = s1.length();
//         int count2[26] = {0};

//         while (i < windowSize && i < s2.length())
//         {
//             int index = s2[i] - 'a';
//             count2[index]++;
//             i++;
//         }

//         if (checkEqual(count1, count2))
//         {
//             return true;
//         }

//         while (i < s2.length())
//         {
//             int index = s2[i] - 'a';
//             count2[index]++;

//             index = s2[i - windowSize] - 'a';
//             count2[index]--;

//             i++;
//             if (checkEqual(count1, count2))
//             {
//                 return true;
//             }
//         }
//         return false;;
//     }
// };

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
#include <cmath>

using namespace std;

bool checkEqual(int a[], int b[])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}

bool checkInclusion(string s1, string s2)
{
    int count1[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};

    while (i < windowSize && i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if (checkEqual(count1, count2))
    {
        return true;
    }

    while (i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;

        index = s2[i - windowSize] - 'a';
        count2[index]--;

        i++;
        if (checkEqual(count1, count2))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string a = "ab";
    // string b = "eidbaooo";
    string b = "eidboaoo";

    cout << checkInclusion(a, b) << endl;

    return 0;
}
