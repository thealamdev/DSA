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
    cout << "Sum & Product of elements: " << sum << endl;
}

/**
 * WAF to swap the max & min number oif an array
 * Example: [5, 2, 9, 1, 7] to [5, 2, 1, 9, 7]
 */

void swapMinMax(int arr[], int size)
{
    int min = INT_MAX;
    int max = INT_MIN;

    int minIndex;
    int maxIndex;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }

    cout << "Max " << max << " Index of " << maxIndex << endl;
    cout << "Min " << min << " Index of " << minIndex << endl;

    swap(arr[maxIndex], arr[minIndex]);
    cout << "After swap min & max" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int numbers[] = {5, 2, 9, 1, 7};
    int size = (sizeof(numbers) / sizeof(numbers[0]));
    sumAndProduct(numbers, size);
    swapMinMax(numbers, size);
}