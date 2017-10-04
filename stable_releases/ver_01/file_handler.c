// import libraries
// *******************************************
#include "file_handler.h"

#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// internal functions
// *******************************************
#define COMMAND_MAX_LENGTH 512
#define LSH_TOK_buffsize 64


char **get_commands_array(char file_directory[256]){

   /*int buffsize = LSH_TOK_buffsize;
   char **command_list = malloc(buffsize * sizeof(char*));

   // 1) open file
   FILE *pointer;
   pointer=fopen(file_directory, "r");
   int index=0;

   // 2) read from file
   char line[COMMAND_MAX_LENGTH];
   while(!feof(pointer)){
      //fscanf(pointer, "%s", line);
      fgets(command_list[index] , COMMAND_MAX_LENGTH, (FILE*)pointer);
      index++;
     
      if (index >= buffsize) {
        buffsize += LSH_TOK_buffsize;
        command_list = realloc(command_list, buffsize * sizeof(char*));
      }
   }

   // 3) close file
   fclose(pointer); 

   return command_list;*/

}

// main functions
// *******************************************
/*
int main(){

      char **command_list;

      char file_directory[50]="batch_scripts.txt";
      command_list=get_commands_array(file_directory);

      return 0;
}*/