# CS252 Assignment
Ankush Singh,
201EC268

This repository contains the codes for the assignment of CS252 Operating Systems course. The problems are taken from 10th edition of Operating Systems Concepts by Abraham Silberschatz.

The file Zombie.c contains the C code for problem number 3.18, and the file time.c contains the C code for problem number 3.19.

## Problem 3.18, Zombie Process

The problem wants us to fork a child process which ultimately becomes a zombie process. 
We can achieve this by using the `fork()` system call which creates a child process and then use the function `sleep()` to put the parent process to sleep for a specified amount of time. 

`ps -l` command is used to display the list of processes currently running along with their states.

`&` is used to run a program in the background.

`kill` command can be used to terminate a process manually.

The header file `unistd.h` used provides access to the POSIX operating system API.
 
 
 ## Problem 3.19, Time taken by command to run from command line
 
 I was able to solve the problem usinfg a different method, but could not solve the problem using the IPC methods.
 
 The logic used is pass the command as argument from the command line do so `main()` is defined with two arguments `int argc` and `char *argv[]`. `strcut timeval` 
 object is defined, and function `gettimeofday()` is passed as a pointer to `struct timeval` object to get the timestamp. The parent process gets the initial timestamp
 and then the child process is created using `fork()` system call then the given process is executed. After this the parent process gets the final timestamp and 
 the difference of two timestamps will give the time elapsed to run a command from the command line.
 
 ## Problem 3.21, Collatz Conjecture
 
 `main(int argc, char *argv[])` was defined with two arguments so that command-line arguments could be passed. 
 
 The number that will be passed as an argument from the command line will be stored in the form of character string in the array. So the character string is converted 
 into an integer using the function `atoi()`.
 The child process will run the Collatz algorithm on a number that is passed as an argument.
 
 `wait()` system call is invoked to make the parent process wait till the child process has completed and then terminate.
 
 For problem 3.21, I have taken reference from https://github.com/OmerBaddour/Operating_Systems_Code/blob/master/ch03/prog-probs/collatz.c
 
 

