## Problem 3.19, Time taken by command to run from command line
 
 I was able to solve the problem usinfg a different method, but could not solve the problem using the IPC methods.
 
 The logic used is pass the command as argument from the command line do so `main()` is defined with two arguments `int argc` and `char *argv[]`. `strcut timeval` 
 object is defined, and function `gettimeofday()` is passed as a pointer to `struct timeval` object to get the timestamp. The parent process gets the initial timestamp
 and then the child process is created using `fork()` system call then the given process is executed. After this the parent process gets the final timestamp and 
 the difference of two timestamps will give the time elapsed to run a command from the command line.
