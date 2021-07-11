#include<iostream>
using namespace std;
int main(){
    int num, s;
    cout <<"Enter a number: ";
    cin>> s;
    for(int i=0; i<s; i++){
        if(i%3 ==0){
            num = num+i;
            cout<<i <<" ";
        }
        else if(i%5 == 0){
            num = num +1;
            cout << i;
        }
    cout << "The sum is : " <<num;
    return 0;
    }
}


