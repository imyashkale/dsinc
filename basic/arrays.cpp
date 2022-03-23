#include <iostream>
using namespace std;

int main() {
   int digit[] = {1,2,3,4};

   digit[3] = 10;

    cout << "SIZE OF DIGIT " << sizeof(digit) << endl;

   for (int currerntNumber: digit) {
       cout << currerntNumber << endl;
   };

   char letters[4] = {'A', 'B' , 'C', 'D'};
   for (char currentLetter; currentLetter < 4; currentLetter ++) {
       cout << letters[currentLetter] << endl;
   };

   return 0;
}