#include <iostream>
using namespace std;

int main()
{
    /*Triangle Pattern print*/
    /**
     *      *
     *     **
     *    ***
     *   ****
     *  *****
     */
    int count = 5;
    for (int i = 1; i <= count; i++)
    {
        /* code */
        for (int j = 1; j <= count; j++)
        {
            /* code */
            if (j >= (count + 1) - i)
            {
                cout << i << ' ';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }

    /**
     * ABCD
     * ABCD
     * ABCD
     * ABCD
     * ABCD
     */
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

    /**
     * 123
     * 456
     * 789
     */

    int item = 3;
    int num = 1;
    for (int i = 1; i <= item; i++)
    {
        for (int j = item; j >= 1; j--)
        {
            cout << (1 + (i * item - j));
            // cout << num;
            num++;
        }
        cout << endl;
    }

    /**
     * ABC
     * DEF
     * GHI
     */

    char ch = 'A';
    for (int i = 1; i <= item; i++)
    {
        for (int j = 1; j <= item; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }

    /**
     * A
     * BB
     * CCC
     */
    char charecter = 'A';
    for (int i = 1; i <= item; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << charecter;
        }
        charecter++;
        cout << endl;
    }

    /**
     * 1
     * 12
     * 123
     */
    for (int i = 1; i <= item; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    /**
     * 1
     * 21
     * 321
     * 4321
     */

    int limit = 4;
    for (int i = 1; i <= limit; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    /**
     * Floyd's Triangle Pattern:
     * 1
     * 23
     * 456
     * 78910
     */

    int traversal = 1;
    for (int i = 1; i <= limit; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << traversal;
            traversal++;
        }
        cout << endl;
    }

    /**
     * Inverted Triange Pattern:
     * 1111
     *  222
     *   33
     *    4
     */

    int invertedLimit = 6;
    for (int i = 1; i <= invertedLimit; i++)
    {
        for (int j = 1; j <= invertedLimit; j++)
        {
            if (i > j)
            {
                cout << ' ';
            }
            else
            {
                cout << i;
            }
        }
        cout << endl;
    }
}