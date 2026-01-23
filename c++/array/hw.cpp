#include <iostream>
using namespace std;

/**
 * WAF to calculate sum & product of all elements in an array
 */

void sumAndProduct(int arr[], int size)
{
    int sum = 1;

    for (int i = 1; i <= size; i++)
    {
        sum *= i;
    }
    cout << sum << endl;
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int size = (sizeof(numbers) / sizeof(numbers[0]));
    sumAndProduct(numbers, size);
}