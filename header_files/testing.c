// import libraries
// *******************************************
#include "command_parser.h"
#include "command_execution.h"
#include "single_command_handler.h"
#include "batch_command_handler.h"


#include <stdio.h>


// internal functions
// *******************************************
void single_command_handling_test(){

    // 01_get user command
    char command[512]="mkdir folder_success";

    // 02_handler user command
    handle_single_command(command);

}


void batch_command_handling_test(){

    // 01_get batch file
    char file_directory[256]="/home/shaapan/Desktop/header_files/batch_script";

    // 02_batch file handling
    handle_batch_commands(file_directory);
}


// main functions
// *******************************************
int main(int argc, char *argv[]){

    //single_command_handling_test();
    batch_command_handling_test();

}




