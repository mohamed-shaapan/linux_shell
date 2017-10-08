// import libraries
// *******************************************
#include "command_parser.h"

#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// internal functions
// *******************************************
int background_flag(char *command){
  
  int ampersand_found=0;
  int ampersand_index=-1;
  int index=0;

  while(command[index]!='\0'){

    if(command[index]=='&'){
      ampersand_found=1;
      ampersand_index=index;

    }else if(ampersand_found==1){
      if(!(command[index]==' '||command[index]==10)){
        ampersand_found=0;
      }

    }

    index++;

  }

  if(ampersand_found==1){
    command[ampersand_index]=' ';
    return 1;
  }

  return 0;

}



// interface functions
// *******************************************
#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"


char **parse_command(char *command, int *background_process_flag){

    *background_process_flag=background_flag(command);

    int bufsize = LSH_TOK_BUFSIZE, position = 0;
    char **tokens = malloc(bufsize * sizeof(char*));
    char *token;

    if (!tokens) {
      fprintf(stderr, "lsh: allocation error\n");
      exit(EXIT_FAILURE);
    }

    token = strtok(command, LSH_TOK_DELIM);
    while (token != NULL) {
      tokens[position] = token;
      position++;

      if (position >= bufsize) {
        bufsize += LSH_TOK_BUFSIZE;
        tokens = realloc(tokens, bufsize * sizeof(char*));
        if (!tokens) {
          fprintf(stderr, "lsh: allocation error\n");
          exit(EXIT_FAILURE);
        }
      }

      token = strtok(NULL, LSH_TOK_DELIM);
    }
    tokens[position] = NULL;
    return tokens;
}
