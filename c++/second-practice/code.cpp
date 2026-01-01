#include <iostream>
using namespace std;

int main()
{
    // Sum of all number 1 to N which divided by 3.
    int n;
    cout << "Enter a number:";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }

    cout << sum << endl;
}