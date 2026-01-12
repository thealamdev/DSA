#include <iostream>
using namespace std;

void printFibonacci(int number)
{
    int a = 0;
    int b = 1;
    int next = 0;
    for (int i = 0; i <= number; i++)
    {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
}

int main()
{
    int number;
    cout << "Enter a number:" << endl;
    cin >> number;
    printFibonacci(number);
}