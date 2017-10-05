// import libraries
// *******************************************
#include "../operating_environment/environment_variables.h"
#include "../utilities/command_history_handler.h"
#include "../utilities/display_handler.h"

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

    // **************************************
    // **************************************

    if(strcmp(args[0], "history")==0){
      // read file from disk
      char **history_list=get_command_history();
      // display history
      print_list(history_list);
      return 1;

    }

    // **************************************
    // **************************************

    if(strcmp(args[0], "log")==0){
      // read file from disk
      char **logs_list=get_command_history();
      // display history
      print_list(logs_list);
      return 1;

    }

    // **************************************
    // **************************************

    if(strcmp(args[0], "exit")==0){

      exit(EXIT_SUCCESS);
      return 1;

    }

    // **************************************
    // **************************************

    if(strcmp(args[0], "PATH")==0){

      printf("$PATH=%s", get_variable("PATH").value);
      return 1;

    }

    // **************************************
    // **************************************

    if(strcmp(args[0], "echo")==0){

      int index=1;
      while(args[index]!=NULL){

        if(args[index][0]=='$'){

          // 01_if argument = variable
          char *var_name=&args[index][1];

          char *var=get_variable(var_name).value;
          printf("%s ", var);

        }else{

          // 02_if argument = variable
          printf("%s ", args[index]);

        }

        index++;  
      }

      return 1;

    }

    // **************************************
    // **************************************

    if(args[1]==NULL){
      // might be assignment command (x=5)

      
      return 1;

    }

    // **************************************
    // **************************************

    return 0;

}




