#include <iostream>
using namespace std;

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
int main()
{
    unsigned int number;
    cout << "Enter a number: " << endl;
    cin >> number;
    powerOfTwo(number);
}