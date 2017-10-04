// import libraries
// *******************************************
#include <stdio.h>
#include <stdlib.h>


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

  while(!feof(pointer)){

    char *current_line=malloc(512*sizeof(char));

    fgets(current_line, 512, pointer);
    lines_as_list[index]=current_line;

    index++;

  }

  // 03_close file
  fclose(pointer);

  // return alue
  return lines_as_list;

}


void write_file(char *file_directory, char *line){

  // 1_open file
  FILE *pointer;
  pointer=fopen(file_directory, "a");
   
  // 2_write to file
  //fprintf(pointer, line);
  fputs(line, pointer);
  fputs("\n", pointer);

  // 3_close file
  fclose(pointer);

}


void print_array(char **list){

  int index=0;

  while(list[index]!=NULL){

    printf("line#%d: %s", index+1, list[index]);
    index++;
  
  }

  printf("\n");

}


// main function
// *******************************************
int main() {


    //char **user_commands=read_file("test.txt");
    //print_array(user_commands);
   
    char *line="mohamed shaapan";
    write_file("test.txt", line);

}


