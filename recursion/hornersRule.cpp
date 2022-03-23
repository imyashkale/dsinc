#include <iostream>

using namespace std;

double recursiveHonersRule(int x, int n)
{
    static double rv;
    if (n == 0)
        return rv;

    rv = 1 + x * rv / n;
    return recursiveHonersRule(x, n - 1);
}

int main()
{
    double rv = recursiveHonersRule(2, 10);
    printf("%lf \n", rv);
    return 0;
}