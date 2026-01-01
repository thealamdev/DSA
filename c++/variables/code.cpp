#include <iostream>
using namespace std;

int main()
{
    int number;
    double number2 = 50.14;
    float sum;

    cout << "Enter number: " << endl;
    cin >> number;
    cout << "The number is : " << number << endl;

    sum = number + number2;
    cout << (int)number2 << endl;

    cout << double(5) / (2) << endl;
    return 0;
}