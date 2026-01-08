#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    int count = 5;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ' ';
        }

        for (int k = 0; k < (count - i); k++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = 1; j <= count; j++)
        {
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
}