#ifndef COMMAND_HISTORY_HANDLER_H_   /* Include guard */
#define COMMAND_HISTORY_HANDLER_H_


/* 
	CommandsBatch file basic functions' prototypes
*/
void add_command_to_history(char *command);

char **get_command_history();

#endif // FILE_PROCESSING_H_