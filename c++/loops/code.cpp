#include <iostream>
using namespace std;

/**
 * WAF to reverse a number and print it.
 */
int reverseNumbr(int n)
{
    int res;
    int reminder;
    float len = round(log10((n) + 1)) - 1;
    int result;

    while (len >= 0)
    {
        reminder = n % 10;
        res = n / 10;
        n = res;
        cout << "r" << reminder << "l" << len << endl;
        result += reminder * pow(10, len);
        len--;
    }
    return result;
}

int main()
{
    int num = 4;
    bool isPrime = true;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not prime" << endl;
    }

    int reverseDigit;
    cout << "Enter a number to reverse it: ";
    cin >> reverseDigit;
    cout << reverseNumbr(reverseDigit) << endl;
    return 0;
}