// import libraries
// *******************************************
#include "single_command_handler.h"
#include "command_parser.h"
#include "basic_command_execution.h"
#include "special_command_execution.h"


#include <stdio.h>



void handle_single_command(char *command){

    // 01_get user command
    
    //char *command_history;
    //strcpy(command_history, command);

    // 02_parse command . get arguments
    char **args=parse_command(command);

    // 03_run command
    // DETERMINE TYPE OF COMMAND
    //execute_basic_command(args, 1);
	  if (execute_special_command(args, 1)==1) {
      // 01_special command entered   
    	return;

  	}else{
  		// 02_basic command entered
  		execute_basic_command(args, 1);
  	}
  	

}