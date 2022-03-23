#include <iostream>

using namespace std;

int fact(int number)
{
    if (number == 0)
    {
        return 1;
    }
    return fact(number - 1) * number;
};

int IterativeFactorial(int number)
{
    int prevSum = 1;
    for (int currIndex = 1; currIndex <= number; currIndex++)
        prevSum = prevSum * currIndex;
    return prevSum;
};

int main()
{
    int rv;
    int number = 3;
    rv = IterativeFactorial(number);
    cout << "Factorial of " << number << " Is " << rv << endl;

    return 0;
}