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

int main()
{

    cout << PrintSum(10) << endl;
}