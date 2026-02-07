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

    vector<int> vec = {2, 3, -8, 7, -1, 2, 3};
    int len = vec.size();
    int target = 6;

    vector<string> strs = {"flower", "flow", "flight"};

    // linearSearch(vec, target);
    // reverseVector(vec);
    // longestCommonPrefix(strs);
    maximumSubarray(vec, len);

    return 0;
}