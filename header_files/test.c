// import libraries
// *******************************************
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// internal functions
// *******************************************
/*#define LSH_TOK_BUFSIZE 100
#define LSH_TOK_DELIM " \t\r\n\a"


void parse_command(char *command){

    char *token;
    token = strtok(command, LSH_TOK_DELIM);

    int index=0;
    while (token != NULL) {

      printf("\nParameter : %s", token);
      index++;

      token = strtok(NULL, LSH_TOK_DELIM);
    }

}*/



// main functions
// *******************************************
#define LSH_TOK_DELIM " -\t\r\n\a"

int main(){


    char str[512] = "This is - www.tutorialspoint.com - website";
   
    /* get the first token */
    char *token;
    token = strtok(str, LSH_TOK_DELIM);
   
    /* walk through other tokens */
    while( token != NULL ) {
        printf( " %s\n", token );
    
        token = strtok(NULL, LSH_TOK_DELIM);
    }
   
    return(0);
}

