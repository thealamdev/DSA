#include <iostream>
#include "headers/array/array.h" 
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    swipMinMax(arr, size);
    return 0;
}