#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[]) { // argc -> count of arguments, argv -> array of character pointers listing all the arguments
	int n; // Input integer 
	pid_t pid;
	
	if (argc != 2) { // Terminate the process if true, error checking
		perror("Usage: ./collatz <positive_integer>\n");
		return 1;
	}

	n = atoi(argv[1]); // Converting character string to integer value

	if (n < 1) {
		perror("First argument must be a positive integer\n");
		return 1;
	}

	pid = fork(); // Creating a process

	if (pid < 0) { // Creation of child process unsuccessful
		perror("Fork failed\n");
		return 1;
	}
	if (pid > 0) { // Process is parent
		wait(NULL); // Parent process waits until child has been completed
		printf("Child process completed with status 0; algorithm terminated\n");
	}
	else { // Child process
		while (n != 1) { // Collatz algorithm
			printf("%d, ", n);
			if (n % 2 == 0) { // n is even 
				n /= 2;
			}
 			else { // n is odd
				n = n * 3 + 1; 
			}
		}
		printf("%d.\n", n);
	}
    	return 0;
}