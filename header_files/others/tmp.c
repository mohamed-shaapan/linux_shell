// import libraries
// *******************************************
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// internal functions
// *******************************************
char **read_file(char *file_directory){

  // result
  char **lines_as_list=malloc(200*512*sizeof(char));

  // 01_open file
  FILE *pointer;
  pointer=fopen(file_directory, "r");

  // 02_read from file
  int index=0;
  char *current_line=malloc(512*sizeof(char));
  char *current_line=malloc(512*sizeof(char));

  while(!feof(pointer)){

    fgets(current_line, 512, pointer);
    //printf("%s", current_line);
    //strcpy(lines_as_list[index], current_line);
    lines_as_list[index]=(*current_line);
    index++;

  }

  // 03_close file
  fclose(pointer);

  // return alue
  return lines_as_list;

}


/*void write_file(){

  // 1_open file
  char file_directory[]="test.txt";
  FILE *pointer;
  pointer=fopen(file_directory, "w");
   
  // 2_write to file
  char some_text[]="my name is mohamed";
  fprintf(pointer, some_text);
  fputs(some_text, pointer);

  // 3_close file
  fclose(pointer);

}*/


void print_array(char **list){

  int index=0;

  while(list[index]!=NULL){

    printf("\nline#%d: %s", index+1, list[index]);
    index++;
  
  }

  printf("\n");

}


// main function
// *******************************************
int main() {


    char **user_commands=read_file("test.txt");

    print_array(user_commands);
   

}