/* Vaccination - Age vary to get vaccinated, we have different vaccin based on age */
// i am very happy today this is my own program. 

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin >> num;
    if(50 <= num){
        cout<<"Elilgible for vaccination";
    }
    else if(45<= num){
        cout << "Elilgible for vaccination";
    }
    else if(18<= num){
        cout << "18 and above 18 also Eligibale for vaccination";
    }
    else{
        cout << "Not eligible";
    }
    return 0;
}