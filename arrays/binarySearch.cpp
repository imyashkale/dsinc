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

int IterativeBinarySearch(struct Array r, int key)
{
    // low is the starting of the array.
    // high is the end of the array.
    int low = 0, high = r.length;
    // mid is calculated by the division.
    // take the half of the array based on operator.
    int mid;

    // until starting index is higher than ending index.
    // It does mean array is not found
    // or the result is returned
    while (low <= high)
    {
        // calculate the mid of the array
        mid = (low + high) / 2;
        // if current indexed value is matched with the key
        // the result will be returned and its acknowledged as key found.
        if (key == r.A[mid])
            return mid;
        // check on the left size
        else if (key < r.A[mid])
            high = mid - 1;
        else
            // check on the right side
            low = mid + 1;
    }
    // if not found
    return -1;
}

int main()
{
    struct Array r = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 10, 10};
    Traverse(r);
    int rv = IterativeBinarySearch(r, 1);
    printf("Result from IterativeBinarySearch : %d \n", rv);
    return 0;
}
