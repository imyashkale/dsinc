#include <iostream>

using namespace std;

int main()
{
    int A[5]; // Garbage values are present here.
    A[2] = 10;
    printf("Elemet at 2 in A is %d \n", A[2]);

    int C[3] = {0, 1, 2};
    printf("C0 : %d C1 : %d C2 %d \n", C[0], C[1], C[2]);

    int D[5] = {1, 2}; //other element which are not asigned will be zero.
    printf("Zero values => D2 %d : D3 %d \n", D[2], D[3]);

    int E[10] = {0}; // All element will be value zero.

    int F[] = {1,2}; // size of F will be the number of the elements in {}

    printf("Reverse Acess : %d \n", 1[E]);
    printf("Array Acess with pointer arithematic : %d \n", *(C + 1));
};