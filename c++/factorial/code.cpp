#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 1;
    cout << "Enter number:";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        sum = sum * i;
    }

    cout << sum;
}