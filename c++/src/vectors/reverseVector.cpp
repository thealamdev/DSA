#include <iostream>
#include <vector>
#include "../../headers/vector/vector.h"
using namespace std;

void reverseVector(vector<int> &vec)
{
    int start = 0;
    int end = vec.size() - 1;

    for (int item : vec)
    {
        if (start < end)
        {
            swap(vec[start], vec[end]);
        }
        start++;
        end--;
    }

    for (int item : vec)
    {
        cout << item << " ";
    }
}