// import libraries
// *******************************************
#include "../utilities/file_handler.h"
#include "../command_handling/single_command_handler.h"

#include "batch_mode_module.h"

#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// internal functions
// *******************************************
void run_batch_mode(char *file_directory){

	// 01_obtain command list array
	char **command_list=read_file(file_directory);

	// 02_execute each command
  	int index=0;

  	while(command_list[index]!=NULL){

  		//printf("\nCommand Is : %s", command_list[index]);
  		handle_single_command(command_list[index]);
    	
    	index++;
  
  	}




/*
	int index=0;
	char current_command[512];
	strcpy(current_command, command_list[index]);
	while(1){
	
		// handle command
		handle_single_command(current_command);

		// control loop
		index +=1;
		strcpy(current_command, command_list[index]);

		if(index==3){break;}
	}*/
		


}




