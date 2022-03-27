#include <iostream>
#include <stdlib.h>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};

void Traverse(struct Array arr)
{
    int currIndex;
    printf("Elements Are \n");
    for (currIndex = 0; currIndex < arr.length; currIndex++)
        printf("%d ", arr.A[currIndex]);
    printf("\n");
};

void Reverse(struct Array *r)
{
    int *B;
    int i, j;
    B = (int *)malloc(r->length * sizeof(int));
    for (i = r->length, j = 0; i >= 0; i--, j++)
        B[j] = r->A[i];
    for (i = 0; i > r->length; i++)
        r->A[i] = B[i];
}
int main()
{
    struct Array r = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 10, 10};
    Traverse(r);
    return 0;
}
