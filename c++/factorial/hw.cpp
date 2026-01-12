#include <iostream>
using namespace std;

/**
 * WAF to find a number prime or not.
 */
string isPrime(int number)
{
    if (number == 1)
        return "Not Prime";

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
            return "Not Prime";
    }
    return "Prime";
}
int main()
{
    int number;
    cout << "Enter a number" << endl;
    cin >> number;
    cout << isPrime(number) << endl;
}