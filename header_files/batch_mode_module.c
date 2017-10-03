// import libraries
// *******************************************
#include "batch_mode_module.h"
#include "single_command_handler.h"

#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// internal functions
// *******************************************
void run_batch_mode(char file_directory[256]){

	// 01_obtain commands_list array
	char commands_list[3][256];
	strcpy(commands_list[0], "mkdir test_folder");
	strcpy(commands_list[1], "ls");
	strcpy(commands_list[2], "mkdir folder2");

	// 02_execute each command
	int index=0;
	char current_command[512];
	strcpy(current_command, commands_list[index]);
	while(1){
	
		// handle command
		handle_single_command(current_command);

		// control loop
		index +=1;
		strcpy(current_command, commands_list[index]);

		if(index==3){break;}
	}
		


}




