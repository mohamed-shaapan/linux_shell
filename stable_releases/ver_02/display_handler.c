// import libraries
// *******************************************
#include "display_handler.h"

#include <stdio.h>
#include <stdlib.h>


// read from file
// *******************************************
void print_list(char **list){

  int index=0;

  while(list[index]!=NULL){

    printf("line#%d: %s", index+1, list[index]);
    index++;
  
  }

  printf("\n");

}