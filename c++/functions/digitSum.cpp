#include <iostream>
using namespace std;

int main()
{
    int digitSum = 0;
    int num = 155;

    while (num > 0)
    {
        int reminder = num % 10;
        digitSum += reminder;
        num = num / 10;
    }
    cout << digitSum << endl;
}