#include <iostream>
#include <vector>
#include "headers/array/array.h"
using namespace std;

int main()
{
    int arr[] = {5, 2, 1, 9, 7, 1, 9, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    // swapMinMax(arr, size);
    // getSumAndProduct(arr, size);
    // printUniqueElements(arr, size);

    vector<int> vec;
    cout << "Size: " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(41);
    cout << "After push back size: = " << vec.size() << endl;
    vec.pop_back();
    cout << "Value at 1 position " << vec.at(1) << endl;
    cout << "First value " << vec.front() << endl;
    cout << "Last value " << vec.back() << endl;
    for (int i : vec)
    {
        cout << i << endl;
    }

    return 0;
}