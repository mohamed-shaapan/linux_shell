/* strtok example */
#include <stdio.h>
#include <string.h>


#define LSH_TOK_DELIM " \t\r\n\a"

int main (){

	// read user command
	char *input_command ="- This, a sample string.";

	// split command into arguments
	char * arguments;
	arguments = strtok (input_command," ,.-");

	// print arguments
	while (arguments != NULL){

		printf ("%s\n",arguments);
		arguments = strtok (NULL, " ,.-");

	}


	return 0;
}