/* If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000. */

#include <iostream>
using namespace std;

    int main() {
    // int a;
    int num,a;
    cout << "Enter a number: ";
    cin >> a;
    for(int i=3; i<a; i++)

        if(i%3 == 0 || i%5 == 0){
            num = num +i;
            cout << i <<" ";
        }
    cout <<"\nThe sum is " << num;      
return 0;
}
