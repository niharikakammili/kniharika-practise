#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
  
        perror("fork failed");
        return 1;
    } else if (pid == 0) {
      
        printf("Hello from child! PID: %d\n", getpid());
    } else {
     
        printf("Hello from parent! PID: %d, Child PID: %d\n", getpid(), pid);
    }

    return 0;
}

