#include <iostream>
using namespace std;

int recurisivePower(int number, int times)
{
    if (times == 0)
        return 1;
    return recurisivePower(number, times - 1) * number;
};

int main()
{
    int rv = recurisivePower(2, 2);
    printf("%d \n", rv);
}