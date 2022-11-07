#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main (int argc, char *argv[]) { // argc -> count of arguments, argv -> array of character pointers listing all the arguments
	int z;
	pid_t pid;
	int status;

	
	if (argc != 2) { // Terminate the process if true, error checking
		perror("Usage: ./collatz <positive_integer>\n");
		return 1;
	}

	z = atoi(argv[1]);

	if (z < 1) {
		perror("First argument must be a positive integer\n");
		return 1;
	}

	pid = fork(); // Creating a process

	if (pid < 0) {
		perror("Fork failed\n");
		return 1;
	}
	if (pid > 0) { // Process is parent
		wait(&status); // Parent process waits until status changes
		printf("Child process completed with status %d; algorithm terminated\n", status);
	}
	else { // Child process
		while (z != 1) { // Collatz algorithm
			printf("%d, ", z);
			if (z % 2 == 0) {
				z /= 2;
			}
 			else {
				z = z * 3 + 1;
			}
		}
		printf("%d.\n", z);
	}
    	return 0;
}
