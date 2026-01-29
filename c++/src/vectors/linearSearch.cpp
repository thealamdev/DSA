#include <iostream>
#include <vector>
#include "../../headers/vector/vector.h"
using namespace std;

void linearSearch(vector<int> &vec, int target)
{
    int index = 0;
    for (int item : vec)
    {
        if (item == target)
            cout << "Target " << item << " " << "found at " << index << " position";
        index++;
    }
}