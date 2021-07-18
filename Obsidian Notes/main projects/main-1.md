####  If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

##### Q1. Find the sum of all the multiples of 3 or 5 below 1000.

###### First- think & write psuedo code
1. Tke input n is a number
2. Use *FOR* loop initialize i=0............n
	2.1  if *i* is divisible by 3 or 5
	2.2 store value in sum= sum + i
3. print sum

###### After that write actual code
```python
sum = (int(input("Enter a number: ")))  
sum=0  
for i in range(1,20):  
    if i % 3 == 0 or i % 5 == 0:  
        sum = sum + i  
print(sum)
```
 
 ###### Output:- 
 
 Enter a number: 20
3 5 6 9 10 12 15 18 20 
The num is:  98 