# CS252 Assignment
Ankush Singh
201EC268

## Problem 3.18, Zombie Process
The problem wants us to create a child process using the command fork() and make it a zombie process. We can achieve
this by killing the parent process of the child process. 
Zombie process - It is process when no parent process is waiting for it (no wait() command was invoked).
