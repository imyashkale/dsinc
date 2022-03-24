#include <iostream>

using namespace std;

int main()
{
    int i;
    cin >> i;
    int A[i] = {0};
    printf("At Index : %d \n", A[3]);

    int *p;
    p = new int[10]; // from heap because of new. In C++
    p[2] = 200;
    delete[] p;
    // p = (int *)  malloc(5 * sizeof(int));
    // free(p)

    return 0;
}