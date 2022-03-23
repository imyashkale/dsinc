#include <iostream>

using namespace std;

double e(int x, int n)
{
    static double p = 1, f = 1;
    double rv;
    if (n == 0)
        return 1;
    rv = e(x, n - 1);
    p = p * x;
    f = f * n;
    return rv + (p / f);
}

int main()
{
    double rv = e(4, 100);
    printf("%lf \n", rv);
    return 0;
}