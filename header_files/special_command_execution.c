// import libraries
// *******************************************
#include "special_command_execution.h"

#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// internal functions
// *******************************************
int execute_special_command(char **args, int foreground_flag){

    //printf("\nCommand Entered : %s\n", args[0]);

    if(strcmp(args[0], "cd")==0){

      chdir(args[1]);
      //printf("\nSuccess\n");
      return 1;

    }

    if(strcmp(args[0], "history")==0){

      //chdir(args[1]);
      printf("\nhistory command entered\n");
      return 1;

    }

    if(strcmp(args[0], "exit")==0){

      //chdir(args[1]);
      printf("\nexit command entered\n");
      return 1;

    }


    return 0;

}




