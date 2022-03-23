#include <iostream>

using namespace std;

struct Reactangle
{
    int Length;
    int Breadth;
};

int main()
{
    struct Reactangle r;
    r.Length = 10;
    r.Breadth = 20;
    printf("L : %d B : %d \n", r.Length, r.Breadth);


    Reactangle *pr = &r;

    // Change the value of the length.

    

    struct Reactangle newr = {
        Length : 30,
        Breadth : 40
    };
    printf("L : %d B : %d \n", newr.Length, newr.Breadth);


    return 0;
};