#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int number = 10;
    int *n = &number;

    cout << "Var Value :" << number << endl;
    number = 22;
    int *p = n;
    *p = 100;
    cout << "After Var Value Changed :" << number << endl;

    int *mp;
    mp = (int *) malloc(5 * sizeof(int));
    cout << mp[0] << endl;
    mp[1] = 200;
    cout << mp[1] << endl;
    cout << mp[2] << endl;
    cout << mp[3] << endl;
    cout << mp[4] << endl;
    cout << "Allocated : " <<  mp[1] << endl;
    int *nm;
    nm = new int[5];
    cout << *nm << endl;
    
    return 0;
}