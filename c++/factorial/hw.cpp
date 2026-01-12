#include <iostream>
using namespace std;

/**
 * WAF to find a number prime or not.
 */
int main()
{
    int number = 4;

    for (int i = 3; i <= 9; i++)
    {
        if (number % i == 0)
        {
            cout << "Prime" << endl;
            break;
        }
        else
        {
            cout << "Not Prime" << endl;
            break;
        }
    }
}