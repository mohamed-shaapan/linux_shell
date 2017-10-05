// import libraries
// *******************************************
#include "environment_variables.h"
#include "interactive_mode_module.h"
#include "batch_mode_module.h"

#include <stdio.h>

// main functions
// *******************************************
int main(int argc, char *argv[]){

    // 01_initialize environment
    initialize_environment();

    // 02_select mode of operation
    if( argc > 1 ){
      // batch Mode
      printf("\nBatch Mode");
      printf("\nFile Directory : %s\n", argv[1]);
      run_batch_mode(argv[1]);
    }
    else{
      // interactive Mode
      printf("\nInteractive Mode\n");
      run_interactive_mode();
    }

    // Perform any shutdown/cleanup.
    return 0;
  }




