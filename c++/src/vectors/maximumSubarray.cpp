#include <iostream>
#include "../../headers/vector/vector.h"
using namespace std;

void maximumSubarray(vector<int> &vec, int size)
{
    int res = vec[0];
    for (int i = 0; i < size; i++)
    {
        int currentSum = 0;
        for (int j = i; j < size; j++)
        {
            currentSum += vec[j];
            cout << currentSum << " ";
            res = max(currentSum, res);
        }
        cout << endl;
    }

    cout << res;
}