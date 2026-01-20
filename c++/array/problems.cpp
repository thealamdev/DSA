#include <iostream>
using namespace std;

/**
 * Find out max and min number form an array
 */

void minMax(int numbers[], int size)
{
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }

        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    cout << "Max Number: " << max << endl;
    cout << "Min Number: " << min << endl;
}

/**
 * Find out the max and min number index from an array
 */

void minMaxIndex(int numbers[], int size)
{
    int maxIndex = INT_MIN;
    int minIndex = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > maxIndex)
        {
            maxIndex = i;
        }

        if (numbers[i] < minIndex)
        {
            minIndex = i;
        }
    }
    cout << "Max index: " << maxIndex << endl;
    cout << "Min index: " << minIndex << endl;
}

/**
 * Find out a target value in an array by using linear search
 */

int linearSearch(int numbers[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (target == numbers[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    minMax(numbers, 5);
    minMaxIndex(numbers, 5);
    cout << "Target found at index: " << linearSearch(numbers, 5, 100) << endl;
}