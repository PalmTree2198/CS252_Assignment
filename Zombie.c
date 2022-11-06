#include <stdio.h>
#include <unistd.h>

int main (void) { 
	pid_t pid; // Data type that represents the process ID 
	pid = fork(); // To create a new process

	if (pid < 0) { // Check if the child process has been created
		perror("Fork failed\n"); // Unable to create a child process
		return 1;
	}
	else if (pid == 0) { // Successfully created a child process
		printf("The process created is the child process.\n");
	}
	else if (pid > 0) { 
		sleep(10); // Puts the parent process to sleep for 10 seconds
	}
	return 0;	
}
