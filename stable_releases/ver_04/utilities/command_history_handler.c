// import libraries
// *******************************************
#include "command_history_handler.h"
#include "file_handler.h"

#include <stdio.h>


// HISTORY
// *******************************************
void add_command_to_history(char *command){

	char *history_file_dir="history_and_logs/history.txt";

	append_to_file(history_file_dir, command);

}

char **get_command_history(){

	char *history_file_dir="history_and_logs/history.txt";

	return read_file(history_file_dir);

}

// LOGS
// *******************************************
void add_process_to_log(char *process){

	char *log_file_dir="history_and_logs/logs.txt";

	append_to_file(log_file_dir, process);

}

char **get_process_log(){

	char *log_file_dir="history_and_logs/logs.txt";

	return read_file(log_file_dir);

}


