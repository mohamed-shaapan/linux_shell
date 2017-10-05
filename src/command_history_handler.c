// import libraries
// *******************************************
#include "command_history_handler.h"
#include "file_handler.h"

#include <stdio.h>

// internal function
// *******************************************
void add_command_to_history(char *command){

	char *history_file_dir="history.txt";

	append_to_file(history_file_dir, command);

}

char **get_command_history(){

	char *history_file_dir="history.txt";

	return read_file(history_file_dir);

}
