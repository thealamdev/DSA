#include <iostream>
#include "headers/array/array.h"
using namespace std;

int main()
{
    int arr[] = {5, 2, 1, 9, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    swipMinMax(arr, size);
    return 0;
}