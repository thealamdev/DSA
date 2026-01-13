#include <iostream>
using namespace std;
/**
 * Find power of 2 without loop.
 */
void powerOfTwo(int n)
{
    if ((n > 0) && ((n & (n - 1)) == 0))
    {
        cout << "Number is the power of 2" << endl;
    }
    else
    {
        cout << "Number is not the power of 2" << endl;
    }
}

/**
 * Find power of 2 with loop
 */

void powerOfTwoLoop(int n)
{
    int res;
    bool isTrue;
    for (int i = 1; i <= n; i++)
    {
        res = pow(2, i);
        if (res == n)
        {
            isTrue = true;
            break;
        }
    }
    if (isTrue)
    {
        cout << "Number is the power of 2" << endl;
    }
    else
    {
        cout << "Number is not the power of 2" << endl;
    }
}

int main()
{
    unsigned int number;
    cout << "Enter a number: " << endl;
    cin >> number;
    powerOfTwo(number);
    powerOfTwoLoop(number);
}