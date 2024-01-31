// string reverseString(string &str)
// {
//     vector<string> tmp;
//     str += " ";
//     string st = "";
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] != ' ')
//         {
//             st += str[i];
//         }
//         else
//         {
//             if (st != "")
//             {
//                 tmp.push_back(st + " ");
//                 st = "";
//             }
//         }
//     }
//     st = "";
//     for (int i = tmp.size() - 1; i >= 0; i--)
//     {
//         st += tmp[i];
//     }

//     return st;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
#include <cmath>

using namespace std;

string reverseString(string &str)
{
    vector<string> tmp;
    str += " ";
    string st = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            st += str[i];
        }
        else
        {
            if (st != "")
            {
                tmp.push_back(st);
                st = "";
            }
        }
    }

    // reverse(tmp.begin(), tmp.end());

    // for (int i = 0; i < tmp.size(); i++)
    //     cout << tmp[i] << ":";
    // cout << endl;

    st = "";
    for (int i = tmp.size() - 1; i > 0; i--)
    {
        st += (tmp[i] + " ");
    }
    st += tmp[0];

    return st;
}

int main()
{
    string a = "Welcome to Coding Ninjas";
    // string a = "   m rs   x       JmkL       ";

    cout << reverseString(a) << endl;

    return 0;
}
