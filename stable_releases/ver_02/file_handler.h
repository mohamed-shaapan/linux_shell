#ifndef FILE_HANDLER_H_   /* Include guard */
#define FILE_HANDLER_H_


/* 
	CommandsBatch file basic functions' prototypes
*/
char **read_file(char *file_directory);

void write_to_file(char *file_directory, char *line);

//void add_command_to_history(char *command);

//void add_log

#endif // FILE_PROCESSING_H_