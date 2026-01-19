#include <iostream>
using namespace std;

/**
 * Find out max and min number form an array
 */

void minMax(int numbers[], int size)
{
    int min;
    int max;

    for (int i = 0; i < size - 1; i++)
    {
        if (min < numbers[i])
        {
            max = numbers[i];
        }
    }

    cout << min << endl;
    cout << max << endl;
}

int main()
{
    int size = 5;
    int numbers[size];
    cout << "Enter numbers:" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    minMax(numbers, size);
}