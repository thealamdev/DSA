#include <iostream>
#include "../../headers/array/array.h"
using namespace std;

/**
 * WAF to print all unique values in an array
 * Given array is [5, 2, 1, 9, 7, 1, 9, 7]
 * Output should be [5, 2]
 */
void printUniqueElements(int arr[], int size)
{
    int multiplier = 0;
    for (int i = 0; i < size; i++)
    {
        if ((multiplier ^ arr[i]) != 0)
        {
            cout << arr[i] << endl;
        }
    }
}