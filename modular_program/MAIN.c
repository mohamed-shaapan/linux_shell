// import libraries
// *******************************************
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// internal functions
// *******************************************


// main functions
// *******************************************
int main(int argc, char *argv[]){

    if( argc > 1 ){
      // Batch Mode
      printf("\nBatch Mode");
      printf("\nFile Directory : %s", argv[1]);
    }
    else{
      // Interative Mode
      printf("\nInteractive Mode");
    }

    return 0;
}




