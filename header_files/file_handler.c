// import libraries
// *******************************************
#include "file_handler.h"

#include <stdio.h>


// internal functions
char **get_commands_array(char file_directory[256]){



}


char* read_file(char[100] file_directory){
   //this funtion reads commands from batch file

   int command_max_len=512;
   char* result;

   // 1) open file
   //file_directory="test.txt";
   FILE *pointer;
   pointer=fopen(file_directory, "r");

   // 2) read from file
   char line[command_max_len];
   while(!feof(pointer)){
      //fscanf(pointer, "%s", line);
      fgets(line, command_max_len, (FILE*)pointer);
      //EXECUTE LINE HERE
      //printf("\nCurrent Command : %s", line);
   }

   // 3) close file
   fclose(pointer);  
}


