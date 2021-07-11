### 1. How to take input
#### Input in C++
```c
cout << "Enter a number : "; 
cin >> n;  
```

#### Input in python
```python
n = input("Enter a number : ")
```


### 2. How to take Output

#### Output in C++
```c
cout << "The number is : " << n << endl; 
```

#### Output in python
```python
print("The number is : " + n + "\n")
```

### 3. How to create `if` statement

If input n is less than 10, then print `The number is less than 10` or if the input is greater than 10 then print `The number is greater than 10`

#### `if` statement in C++
```c
if ( n < 10) {  
	cout << " The number is less than 10"<<endl;  
            
} else {
	cout << "the number is greter than 10"<<endl;
} 
```

#### `if` statement in python
```python
if ( n < 10):
	cout << " The number is less than 10"<<endl;  
else:
	cout << "the number is greter than 10"<<endl; 
```


### 4. How to input a number and change type

#### In python

```python
# take input from user
a = input()

# print data type
print(type(a))

# type cast = type change, into integer
input_a = int(a)

# print data type
print(type(a))
```

### Example 1

#### Code in c++
```c
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	if ( 1 < n ){
	  cout << "The number is greter than 1";
	} else {
	cout << "The number is less than 1";
	}
	return 0;
}

```

#### Code in python
```python
n = (int(input("Enter annumber: ")))  
if n > 10:  
     print("The number is greter than 10")  
else:  
     print("The numebr is less than 10")
```