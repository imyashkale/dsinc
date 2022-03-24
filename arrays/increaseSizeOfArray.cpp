#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int *p, *q;
    p = (int *)malloc(5 * sizeof(int));
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;

    for (int currIndex = 0; currIndex < 3; currIndex++)
        printf("V: %d \n", p[currIndex]);

    q = (int *)malloc(10 * sizeof(int));
    for (int currIndex = 0; currIndex < 3; currIndex++)
    {
        q[currIndex] = p[currIndex];
        printf("Coppied: %d \n", q[currIndex]);
    }
    
    free(p);
    p = q;
    q = NULL;

    for (int currIndex = 0; currIndex < 3; currIndex++)
        printf("AtLast : %d \n", p[currIndex]);

    return 0;
}