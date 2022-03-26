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

int GetFromArray(struct Array r, int index)
{
    if (index >= 0 && index < r.length)
        return r.A[index];
    return -1;
}

void Set(struct Array *r, int index, int value)
{
    if (index >= 0 && index < r->length)
        r->A[index] = value;
}

int Max(struct Array r)
{
    int max = r.A[0];
    for (int startingFrom = 0; startingFrom < r.length; startingFrom++)
    {
        if (max < startingFrom)
            max = r.A[startingFrom];
    }
    return max;
}
int Min(struct Array r)
{
    int min = r.A[0];
    for (int startingFrom = 0; startingFrom < r.length; startingFrom++)
    {
        if (min > startingFrom)
            min = r.A[startingFrom];
    }
    return min;
}

int main()
{
    struct Array r = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 1111}, 10, 10};
    Traverse(r);
    int max = Max(r);
    printf("Maxvalue : %d \n", max);
    int min = Min(r);
    printf("Minvalue : %d \n", min);
    return 0;
}
