#include <iostream>
#include "../../headers/vector/vector.h"
using namespace std;

void longestCommonPrefix(vector<string> strs)
{
    string prfix = "";
    int index = 0;
    for (string str : strs)                  
    {
        for (int i = 0; i < str.length(); i++)
        {
            cout <<  index << " " << i;
            // if (str[i] == strs[i][i])
            // {
            //     cout <<  index << " " << i;
            // }
        }
        ++index;
    }
}