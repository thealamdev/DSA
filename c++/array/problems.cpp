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
    }

    // cout << min << endl;
    cout << min << endl;
}

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    minMax(numbers, 5);
}