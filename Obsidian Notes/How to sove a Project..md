## Problem Statement
ref : [Problem 1 - Project Euler](https://projecteuler.net/problem=1)

 Q. If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

____

## Solution

### Step 1 : Create input output Diagram
   
![[Pasted image 20210704115215.png]]
 
### Step 2 : Pseudo code

#### Version 1 :
##### Part 1
- Step 1 : Take 1 no. as input <- 10
- Step 2 : Divinde iteration i++ (10)
- Step 3 : i%3== 0 or i%5 == 0
- Step 4 : i =3 5 6 9
- Step 5 : num= num +i
- Step 6 : print num (i ki values add)
- Step 6 : Print Output -> 23

###### Part 2
code in c++

```c
#include <iostream>

using namespace std;

 int main() {

 int num,a;

 cout <<"Enter a number: ";

 cin>>a;

 for(int i=3; i<a; i++)

  if(i%3 == 0 || i%5 == 0){
  cout << i <<" ";
  num = num +i;
 }

 cout <<"\nThe sum is " << num; 

return 0;

}

```


### Step 3 : Python Code
```python
sum = (int(input("Enter a number: ")))  
sum=0  
for i in range(10):  
    if i % 3 == 0 or i % 5 == 0:  
        sum = sum + i  
print(sum)
```