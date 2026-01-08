#include <iostream>
using namespace std;

int fact(int f)
{
    int res = 1;
    for (int i = 1; i <= f; i++)
    {
        res *= i;
    }
    return res;
}

int fact_n(int n)
{
    return fact(n);
}

int fact_r(int r)
{
    return fact(r);
}

int fact_nmr(int nmr)
{
    return fact(nmr);
}

int nCr(int n, int r)
{
    return fact_n(n) / (fact_r(r) * (fact(n - r)));
}
int main()
{
    /**
     * nCr = n! / r!(n-r)! this is called binomial coefficient
     */
    cout << nCr(10, 5) << endl;
}