// import libraries
// *******************************************
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include<stdio.h>


// internal functions
// *******************************************
int run_single_command(char **args){

  pid_t pid;
    int status;

    pid = fork();
    if (pid == 0) {
      // Child process
      if (execvp(args[0], args) == -1) {
        perror("lsh");
      }
      exit(EXIT_FAILURE);
    } else if (pid < 0) {
      // Error forking
      perror("lsh");
    } else {
      // Parent process
      do {
        waitpid(pid, &status, WUNTRACED);
      } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }

    return 1;
}


// main functions
// *******************************************
int main(){

    char *args[] = {"ls", NULL};

    run_single_command(args);

    return 0;
}




