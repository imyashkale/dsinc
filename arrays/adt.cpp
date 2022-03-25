#include <iostream>
#include <stdlib.h>

struct Array
{
    int A[6];
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

void Append(struct Array *r, int item)
{
    if (r->length < r->size)
        r->A[r->length++] = item;
}

void Insert(struct Array *r, int atIndex, int item)
{
    for (int currIndex = r->length; currIndex > atIndex; currIndex--)
    {
        r->A[currIndex] = r->A[currIndex - 1];
    }
    r->A[atIndex] = item;
    r->length++;
}
void Delete(struct Array *r, int index)
{
    if (index >= 0 && index < r->length)
    {
        for (int currIndex = index; currIndex < r->length - 1; currIndex++)
            r->A[currIndex] = r->A[currIndex + 1];
        r->length--;
    };
};

int main()
{
    struct Array r = {{4, 5, 6, 3}, 6, 4};
    Traverse(r);

    // Insert(&r, 2, 100);
    // Append(&r, 10);
    Traverse(r);
    Delete(&r, 1);
    Traverse(r);
    return 0;
}