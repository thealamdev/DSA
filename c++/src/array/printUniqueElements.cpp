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
    int newArr[] = {};
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] != arr[j])
            {
               newArr[i] = arr[i];    
            }
        }
    }

    int len = sizeof(newArr) / sizeof(newArr[0]);


    for(int i=0; i<len; i++){
        cout << newArr[i] << " ";
    }
}