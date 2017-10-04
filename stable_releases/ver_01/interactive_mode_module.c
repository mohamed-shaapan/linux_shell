// import libraries
// *******************************************
#include "interactive_mode_module.h"
#include "single_command_handler.h"

#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// internal functions
// *******************************************
char *read_input_line(void){

  	char *line = NULL;
  	ssize_t bufsize = 0; // have getline allocate a buffer for us
  	getline(&line, &bufsize, stdin);
  	
  	return line;
}


void run_interactive_mode(){

    char *user_command;

    while(1){

      // 01_get user command
      printf("\nShell >> ");
   		user_command=read_input_line();

      // 02_handler user command
      handle_single_command(user_command);
      //printf("\nYour Command Is : %s", user_command);
    }


}