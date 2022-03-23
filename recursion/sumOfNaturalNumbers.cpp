#include <iostream>

using namespace std;

int sum(int number)
{
    if (number == 0)
    {
        return 0;
    }
    return sum(number - 1) + number;
};

int main()
{
    int rv;

    rv = sum(5);
    printf("%d \n", rv);
    return 0;
}