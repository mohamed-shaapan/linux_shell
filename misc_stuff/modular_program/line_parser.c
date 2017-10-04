// import libraries
// *******************************************
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// internal functions
// *******************************************
#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"


char **parse_line(char *line){
  //ls_split_line

    int bufsize = LSH_TOK_BUFSIZE, position = 0;
    char **tokens = malloc(bufsize * sizeof(char*));
    char *token;

    if (!tokens) {
      fprintf(stderr, "lsh: allocation error\n");
      exit(EXIT_FAILURE);
    }

    token = strtok(line, LSH_TOK_DELIM);
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


void print_args(char **args){

  int index=0;
  while(1){
    if(args[index]==NULL){
      break;
    }
    printf("\nargs[%d] = %s", index, args[index]);
    index++;
  }

}

// main functions
// *******************************************
int main(){

  char* line="mohamed ibrahim shaapan";

    char **args=parse_line(args);

    print_args(args);


    return 0;
}






