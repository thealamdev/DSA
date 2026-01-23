#include <iostream>
#include "../../headers/array/array.h"
using namespace std;

void getSumAndProduct(int arr[], int size)
{
    int sum = 1;
    for (int i = 0; i < size; i++)
    {
        sum *= arr[i];
    }
    cout << "Sum and Product is " << sum << endl;
}