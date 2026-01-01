#include <iostream>
using namespace std;

int main()
{
    int row;
    int col;
    cout << "Enter row: ";
    cin >> row;
    cout << "Enter col: ";
    cin >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            /* code */
            cout << "#";
        }
        cout << endl;
    }
}