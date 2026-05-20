#include <iostream>
#include "../../headers/pointer/pointer.h"
using namespace std;

void pointer()
{
    int a = 10;
    int* ptr = &a;

    int value = *(ptr);
    int** parPtr = &ptr; 

    cout << "Address of a: " << ptr << endl;
    cout << "Value of ptrs values address: " << value << endl;
    cout << "Value of ptrs values address: " << **(parPtr) << endl;
}