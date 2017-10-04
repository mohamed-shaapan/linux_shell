// import libraries
// *******************************************
#include "basic_command_execution.h"

#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


// internal functions
// *******************************************
void execute_basic_command(char **args, int foreground_flag){

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

    } else if (foreground_flag==1){
      // Parent process
      do {
        waitpid(pid, &status, WUNTRACED);
      } while (!WIFEXITED(status) && !WIFSIGNALED(status));

    } else {
      // let program run in background
    }

}




