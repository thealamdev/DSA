#include <iostream>
using namespace std;

/**
 * WAF to reverse a number and print it.
 */

int reverseNumbr(int n){
    int res;
    int reminder;
    while(n>0){
        reminder = n% 10;
        res = n / 10;
        
    }
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
    return 0;
}