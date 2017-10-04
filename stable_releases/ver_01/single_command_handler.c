// import libraries
// *******************************************
#include "command_parser.h"
#include "command_execution.h"
#include "single_command_handler.h"

#include <stdio.h>



void handle_single_command(char *command){

    // 01_get user command
    //char command[512]="mkdir folder_success";

    // 02_parse command . get arguments
    char **args=parse_command(command);

    // 03_run command
    // DETERMINE TYPE OF COMMAND
    run_single_command(args);

    /*
    // 01_an empty command was entered.
	if (args[0] == NULL) {
   
    	return 1;
  	}

  	int i;
  	for (i = 0; i < lsh_num_builtins(); i++) {
  		//special command entered
    	if (strcmp(args[0], builtin_str[i]) == 0) {
      		return (*builtin_func[i])(args);
    	}
  	}else{
  		// normal command type
  		run_single_command(args);
  	}
  	*/

}