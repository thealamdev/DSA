#include <iostream>
using namespace std;

int main()
{
    /*Triangle Pattern print*/
    int count = 5;
    for (int i = 1; i <= count; i++)
    {
        /* code */
        for (int j = 1; j <= count; j++)
        {
            /* code */
            if (j >= (count + 1) - i)
            {
                cout << i;
            }
            else
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }

    /** ABCD */
    for (int i = 0; i < count; i++)
    {
        char ch = 'A';
        /* code */
        for (int j = 0; j < count; j++)
        {
            /* code */
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }
}