#include <stdio.h>  
#include <stdlib.h>
#include <unistd.h>  
#include <sys/time.h> // Used to define timeval strcuture 

int main(int argc, char *argv[]) { // argc -> count of arguments, argv -> values of arguments
    struct timeval init_time, final_time; // Data structure for time (timeval)
    pid_t pid = fork(); // To create a new process

    if (pid < 0) { // Check if the child process has been created
        perror("Fork failed"); // Unable to create a child process
        return 1;
    } 
    else if (pid == 0) {
        execvp(argv[1], argv + 1); // Execute if the process is child process, current child process is replaced by the given process
        perror("execvp failed");
        exit(123); // Any invocation exited with non-zero status, it indicates an error
    } // Don't execute if the process is parent process

    int status; // Shows the state child process
    gettimeofday(&init_time, NULL); // Get initial timestamp
    wait(NULL); // Wait until child has run the process, this suspends the execution of the current process until the child process has changed its state
    gettimeofday(&final_time, NULL); // Get final timestamp
    long long diff = final_time.tv_sec - init_time.tv_sec; // Gives the time difference in seconds
    long long udiff = final_time.tv_usec - init_time.tv_usec; // Gives the time difference in microseconds
    printf("Elapsed time: %llds, %lldus\n", diff, udiff); // Print time difference
    exit(0); // Exit success
}
