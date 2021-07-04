### How to start debugger

Temporary steps.

- Step 1 :  Run VS code

- Step 2 : File => Open Folder
	- choose Music => C++ 
	- ![[Pasted image 20210704185448.png]]

- Step 3 : Paste the code to debug
	- ![[Pasted image 20210704185539.png]]

- Step 4 : Click on Run and Debug menu
	- ![[Pasted image 20210704185659.png]]

- Step 5 : Set a breakpoint
	- ![[Pasted image 20210704190134.png]]

- Step 6 : Click on run icon and wait untill orange bar is visible
	- ![[Pasted image 20210704185728.png]]

- Step 7 : Final debugging perspective screenshot
	- ![[Pasted image 20210704185923.png]]


### How to do Debug
#### Step Over
-   Execute the next line of code but not follow execution through any function calls (Step Over): 
	-   Always use step over until a function call.
	-   `F10`
	-   Before
		-   ![[Pasted image 20210704190738.png]]
	-   After
		-   ![[Pasted image 20210704190828.png]]
-   Restart a debugging session : 
	-   `CTRL` + `SHIFT` + `F5`
	-   Before
		-   ![[Pasted image 20210704190942.png]]
	-   After
		-   ![[Pasted image 20210704191016.png]]

#### Step Into
-   Execute code one statement at a time, following execution into function calls (Step Into) `F11` : 
	-   **Only used when there is a function call.**
	-   Behavior of Step Over `F10`
		-   Before `F10`
			-   ![[Pasted image 20210704191544.png]]
		-   After `F10`
			-   ![[Pasted image 20210704191644.png]]
	-   Behavior of Step Into `F11`
		-   Before `F11`
			-   ![[Pasted image 20210704191828.png]]
		-   After `F11`
			-   ![[Pasted image 20210704191906.png]]

#### Step Out
-   Execute the remaining lines of a function in which the current execution point lies (Step Out): 
-   Only used inside a function
	-   ![[Pasted image 20210704192440.png]]
	-   When you run Step Over, it will execute the rest of the lines of code ( line 5 to line 7 ) automatically only till function ends.
	-   Once finished, jumps back to `int main()` function
	-   `SHIFT` + `F11`
		-   Before
			-   ![[Pasted image 20210704192022.png]]
		-   After
			-   ![[Pasted image 20210704192056.png]]

-   Resume execution of your code from the current statement to the selected statement (Run to Cursor): 
	-   `CTRL` + `F10`
-   Run the application (or jump to next breakpoint): 
	-   `F5`
