// import libraries
// *******************************************
#include "interactive_mode_module.h"
#include "batch_mode_module.h"


#include <stdio.h>

// main functions
// *******************************************
int main(int argc, char *argv[]){

    // Load config files, if any.
    if( argc > 1 ){
      // Batch Mode
      printf("\nBatch Mode");
      printf("\nFile Directory : %s\n", argv[1]);
      run_batch_mode(argv[1]);
    }
    else{
      // Interative Mode
      printf("\nInteractive Mode\n");
      run_interactive_mode();
    }

    // Perform any shutdown/cleanup.
    return 0;
  }




