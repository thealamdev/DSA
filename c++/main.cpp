#include <iostream>
#include <vector>
#include "headers/array/array.h"
#include "headers/vector/vector.h"
using namespace std;

int main()
{
    int arr[] = {5, 2, 1, 9, 7, 1, 9, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    // swapMinMax(arr, size);
    // getSumAndProduct(arr, size);
    // printUniqueElements(arr, size);

    vector<int> vec = {2, 5, 6, 3, 7};
    int target = 6;

    vector<string> strs = {"flower", "flow", "flight"};

    // linearSearch(vec, target);
    // reverseVector(vec);
    longestCommonPrefix(strs);

    return 0;
}