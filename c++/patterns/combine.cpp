#include <iostream>
using namespace std;

int main()
{
    /**
     *      1
     *     121
     *    12321
     *   1234321
     */
    int count = 4;
    for (int i = 1; i < count; i++)
    {
        for (int j = 1; j <= (count - i); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int j = (i - 1); j > 0; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}