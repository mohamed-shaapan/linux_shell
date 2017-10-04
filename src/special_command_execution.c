// import libraries
// *******************************************
#include "special_command_execution.h"
#include "file_handler.h"
#include "display_handler.h"

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
      // read file from disk
      char **history_list=read_file("directory");
      // display history
      print_list(history_list);
      return 1;

    }

    if(strcmp(args[0], "log")==0){
      // read file from disk
      char **log_list=read_file("directory");
      // display log
      print_list(log_list);
      return 1;

    }


    if(strcmp(args[0], "exit")==0){

      exit(EXIT_SUCCESS);
      return 1;

    }


    return 0;

}




