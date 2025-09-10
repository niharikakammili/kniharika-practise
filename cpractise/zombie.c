#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        
        perror("fork failed");
        exit(1);
    } else if (pid == 0) {
      
        printf("Child process (PID: %d) is exiting.\n", getpid());
        exit(0);
    } else {
        
        printf("Parent process (PID: %d), child PID: %d\n", getpid(), pid);
        printf("Sleeping... check zombie using 'ps aux | grep Z' or 'ps -l'\n");
        sleep(30); 
    }

    return 0;
}

