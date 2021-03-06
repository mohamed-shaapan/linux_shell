#include<stdio.h>

// RUN MAIN MODULE
// ************************************************
int main(){


    return 0;
}

// RUN SIMPLE COMMAND
// ************************************************
int runcmd(char *cmd)
{
  char* argv[MAX_ARGS];
  pid_t child_pid;
  int child_status;

  parsecmd(cmd,argv);
  child_pid = fork();
  if(child_pid == 0) {
    /* This is done by the child process. */

    execv(argv[0], argv);
    
    /* If execv returns, it must have failed. */

    printf("Unknown command\n");
    exit(0);
  }
  else {
     /* This is run by the parent.  Wait for the child
        to terminate. */

     do {
       pid_t tpid = wait(&child_status);
       if(tpid != child_pid) process_terminated(tpid);
     } while(tpid != child_pid);

     return child_status;
  }