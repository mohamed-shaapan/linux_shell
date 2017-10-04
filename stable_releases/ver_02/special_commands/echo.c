// import libraries
// *******************************************
#include <stdlib.h>
#include <stdio.h>


// internal functions
// *******************************************
void change_directory(char **args){

  chdir(args[1]);

}