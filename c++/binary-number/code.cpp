#include <iostream>
using namespace std;

int binary(int decimal)
{
    int ans = 0;

    for (int i = 0; decimal > 0; i++)
    {
        int reminder = decimal % 2;
        ans += (reminder * pow(10, i));
        decimal /= 2;
    }

    return ans;
}
int main()
{
    /**
     * Decimal to Binary
     */
    for (int i = 0; i <= 20; i++)
    {
        cout << binary(i) << endl;
    }
}