#include <iostream>
#include <math.h>
using namespace std;

int decimal(int binary)
{
    int ans = 0;
    float len = round(log10(binary) + 1) - 1;
    for (int i = 0; i <= len; i++)
    {
        int reminder = binary % 10;
        ans += (pow(2, i) * reminder);
        binary /= 10;
    }
    return ans;
}

int main()
{
    cout << decimal(1011) << endl;
}