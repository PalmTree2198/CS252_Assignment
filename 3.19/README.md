## Problem 3.19, Time taken by the command to run from the command line
 
I was able to solve the problem using a different method, but could not solve the problem using the IPC methods.
 
The logic used is to pass the command as the argument from the command line so `main()` is defined with two arguments, `int argc` and `char *argv[]`. `strcut timeval` object is defined, and function `gettimeofday()` is passed as a pointer to `struct timeval` object to get the timestamp. The parent process gets the initial timestamp and then the child process is created using `fork()` system call then the given process is executed. After this the parent process gets the final timestamp and the difference of two timestamps will give the time elapsed to run a command from the command line.
