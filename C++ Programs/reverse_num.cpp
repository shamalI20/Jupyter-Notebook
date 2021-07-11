// reverse value from user 
#include <iostream>
using namespace std;
int main() {
    int num=0;
    std::cout << "Enter a number: ";
    cin>> num;
    for(int i=0; i<num; i--){
        if (num >= -2)
        cout << num-- << " ";
    }
return 0;
}