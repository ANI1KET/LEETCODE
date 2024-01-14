// class Solution {
// public:
//     char toLowerCase(char ch)
//     {
//         if (ch >= 'a' && ch <= 'z')
//             return ch;
//         else
//         {
//             char temp = ch - 'A' + 'a';
//             return temp;
//         }
//     }

//     string extractDigitAlpha(string s, int n)
//     {
//         string a;

//         for (int i = 0; i < n; i++)
//         {
//             if (isdigit(s[i]) || isalpha(s[i]))
//             {
//                 a.push_back(s[i]);
//             }
//         }

//         return a;
//     }

//     bool isPalindrome(string s)
//     {
//         int l = 0;
//         int r = s.length() - 1;

//         s = extractDigitAlpha(s, r + 1);
//         r = s.length() - 1;

//         while (l <= r)
//         {
//             if (toLowerCase(s[l]) != toLowerCase(s[r]))
//             {
//                 return false;
//             }
//             else
//             {
//                 l++;
//                 r--;
//             }
//         }

//         return true;
//     }
// };

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cmath>
#include <cctype>

using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

string extractDigitAlpha(string s, int n)
{
    string a;

    for (int i = 0; i < n; i++)
    {
        if (isdigit(s[i]) || isalpha(s[i]))
        {
            a.push_back(toLowerCase(s[i]));
        }
    }

    return a;
}

bool isPalindrome(string s)
{
    int l = 0;
    int r = s.length() - 1;

    s = extractDigitAlpha(s, r + 1);
    r = s.length() - 1;

    while (l <= r)
    {
        if (s[l] != s[r])
        // if (toLowerCase(s[l]) != toLowerCase(s[r]))
        {
            return false;
        }
        else
        {
            l++;
            r--;
        }
    }

    return true;
}

int main()
{
    // string s = {"@N !am a#n"};
    string s = {"A man, a plan, a canal: Panama"};
    cout << endl
         << isPalindrome(s) << endl;

    return 0;
}