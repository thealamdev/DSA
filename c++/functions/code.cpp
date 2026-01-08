#include <iostream>
using namespace std;

int PrintSum(int len)
{
    int sum = 0;
    for (int i = 1; i <= len; i++)
    {
        sum += i;
    }
    return sum;
}

int Factorial(int f)
{
    int sum = 1;
    for (int i = f; i > 0; i--)
    {
        sum = sum * i;
    }
    return sum;
}

int main()
{

    cout << PrintSum(10) << endl;
    cout << Factorial(5) << endl;
}