# CS252 Assignment
Ankush Singh,
201EC268

This repository contains the codes for the assignment of CS252 Operating Systems course. The problems are taken from 10th edition of Operating Systems Concepts by Abraham Silberschatz.

The file Zombie.c contains the C code for problem number 3.18, and the file time.c contains the C code for problem number 3.19.

## Problem 3.18, Zombie Process

The problem wants us to fork a child process which ultimately becomes a zombie process. 
We can achieve this by using the `fork()` system call which creates a child process and then use the function `sleep()` to put the parent process to sleep for a specified amount of time. 

`ps -l` command is used to display the list of processes currently running along with their states.

`&` is used to run a program in the backgeround.

`kill` command can be used to terminate a process manually.

The header file `unistd.h` used provides access to the POSIX operating system API.
 
 
 ## Problem 3.19, Time taken by command
 
 

