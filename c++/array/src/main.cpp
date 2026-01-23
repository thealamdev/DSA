#include <iostream>
#include "../header/unique_array.h"
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    uniqueElements(arr, size);
}