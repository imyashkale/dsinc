#include <iostream>

using namespace std;

int add(int right, int left) // formal params
{
    int sum = (right + left);
    return sum;
}

void swap(int *right, int *left)
{
    
    int tmp = *right;
    *right = *left;
    *left = tmp;
};

void byRef(int &right, int &left) {
    int tmp = right;
    right = left;
    left = tmp;
}

int main()
{
    int p1 = 20, p2 = 40;
    printf("P1 : %d | P2 : %d \n", p1, p2);
    swap(&p1, &p2); // actual params
    printf("P1 : %d | P2 : %d \n", p1, p2);

    printf("---| ByRef |---- \n");
    int p3 = 30, p4 = 50;
    printf("P3 : %d | P4 : %d \n", p3, p4);
    swap(p3, p4); // actual params
    printf("P3 : %d | P4 : %d \n", p3, p4);
    return 0;
}