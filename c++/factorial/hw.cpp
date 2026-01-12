#include <iostream>
using namespace std;

/**
 * WAF to find a number prime or not.
 */
string isPrime(int number)
{
    if (number == 1)
        return to_string(1) + " is Not Prime";

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)

            return to_string(number) + " is Not Prime";
    }
    return to_string(number) + " is Prime";
}

void seriesOfPrimeNumber(int range)
{
    for (int i = 1; i <= range; i++)
    {
        cout << isPrime(i) << endl;
    }
}

int main()
{
    int number;
    cout << "Enter a number" << endl;
    cin >> number;
    cout << isPrime(number) << endl;
    seriesOfPrimeNumber(number);
}