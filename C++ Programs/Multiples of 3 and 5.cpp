#include <iostream>
using namespace std;

void print_number(int a){
    cout << a;
    cout << "New fucntion";
}
    
int main() {
    int a,b;
    int sum;
    for(int i=1; i<4; i++){
        sum=sum+i*3;
        print_number(i*3);
        cout << i*3 << " ";
    }
    for(int i=1; i<2; i++){
        sum =sum+i*5;
        cout << i*5 << " ";
    }
    cout << endl;
    cout << "Total sum is : " << sum;

    return 0;
}
