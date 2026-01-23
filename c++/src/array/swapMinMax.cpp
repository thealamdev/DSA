#include <iostream>
#include "../../headers/array/array.h"
using namespace std;

void swapMinMax(int arr[], int size)
{
    int max = INT_MIN;
    int min = INT_MAX;
    int maxIndex;
    int minIndex;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }
    }
    swap(arr[maxIndex], arr[minIndex]);

    /** Print after swap */
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}