## Problem 3.21, Collatz Conjecture
 
 `main(int argc, char *argv[])` was defined with two arguments so that command-line arguments could be passed. 
 
 The number that will be passed as an argument from the command line will be stored as a character string in the array. So the character string is converted 
 into an integer using the function `atoi()`.
 The child process will run the Collatz algorithm on a number that is passed as an argument.
 
 `wait()` system call is invoked to make the parent process wait till the child process has completed and then terminate.
 
 For problem 3.21, I have taken reference from https://github.com/OmerBaddour/Operating_Systems_Code/blob/master/ch03/prog-probs/collatz.c.
