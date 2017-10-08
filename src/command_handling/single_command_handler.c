// import libraries
// *******************************************
#include "../utilities/command_parser.h"
#include "../utilities/command_history_handler.h"

#include "single_command_handler.h"
#include "basic_command_execution.h"
#include "special_command_execution.h"

#include <stdio.h>
#include <stdlib.h>


// internal function
// *******************************************
void handle_single_command(char *command){

    // handle exit on ctrl+D
    if(command[0]==0){
      printf("\nEXIT Ctrl+D\n");
      exit(EXIT_SUCCESS);
    }

    // 01_save command to history
    add_command_to_history(command);

    // 02_parse command . get arguments
    int background_process_flag=0;
    char **args=parse_command(command, &background_process_flag);

    if(background_process_flag==1){
      printf("\nBackground Process\n");
    }

    // 03_run command
    // DETERMINE TYPE OF COMMAND
    //execute_basic_command(args, 1);
	  if (execute_special_command(args, 1)==1) {
      // 01_special command entered   
    	return;

  	}else{
  		// 02_basic command entered
  		execute_basic_command(args, background_process_flag);
  	}
  	

}