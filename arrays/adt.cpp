#include <iostream>
#include <stdlib.h>
using namespace std;
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

int LinearSearch(struct Array r, int key)
{
    for (int currIndex = 0; currIndex < r.length; currIndex++)
    {
        if (key == r.A[currIndex])
        {
            printf("Key found at index %d ", currIndex);
            return currIndex;
        }
    }
    return -1;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Transpostion
int ImprovedTranspostionLinearSearch(struct Array *r, int key)
{
    for (int currIndex = 0; currIndex < r->length; currIndex++)
    {
        if (key == r->A[currIndex])
        {
            swap(&r->A[currIndex], &r->A[currIndex - 1]);
            return currIndex;
        };
    }
    return -1;
};

int ImprovedMoveToFrontLinearSearch(struct Array *r, int key)
{
    for (int currIndex = 0; currIndex < r->length; currIndex++)
    {
        if (key == r->A[currIndex])
        {
            swap(&r->A[currIndex], &r->A[0]);
            return currIndex;
        };
    }
    return -1;
};

int main()
{
    struct Array r = {{4, 5, 6, 3}, 6, 4};
    Traverse(r);

    Traverse(r);
    // Insert(&r, 2, 100);
    // Append(&r, 10);
    // Delete(&r, 1);
    int searchResult = ImprovedMoveToFrontLinearSearch(&r, 3);
    cout << "Result " << searchResult;
    Traverse(r);
    return 0;
}


