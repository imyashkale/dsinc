#include <iostream>

using namespace std;

class Reactangle
{
    int lenght = 0;
    int breadth = 0;

    Reactangle(int a, int b)
    {
        lenght = a;
        breadth = b;
    };

    int area()
    {
        int ar = (lenght * breadth);
        return ar;
    };
};

int main()
{
    Reactangle r = new Reactangle(100, 3);
    int a = rt.area();
    printf("%d \n", a);
    return 0;
};