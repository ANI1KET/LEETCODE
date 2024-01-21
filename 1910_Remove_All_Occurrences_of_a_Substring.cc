// class Solution {
// public:
//     string removeOccurrences(string s, string part) {

//         while (s.length() != 0 && s.find(part) < s.length())
//         {
//             s.erase(s.find(part), part.length());
//         }

//         return s;
//     }
// };

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
#include <cmath>

using namespace std;

string removeOccurrences(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }

    return s;
}

int main()
{
    string a = "fatewfattfatehs";
    string b = "fat";

    b = removeOccurrences(a, b);
    cout << b << endl;

    return 0;
}
