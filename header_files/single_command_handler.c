// import libraries
// *******************************************
#include "command_parser.h"
#include "command_execution.h"
#include "single_command_handler.h"

#include <stdio.h>



void handle_single_command(char *command){

    // 01_get user command
    //char command[512]="mkdir folder_success";

    // 02_parse command . get arguments
    char **args=parse_command(command);

    // 03_run command
    run_single_command(args);

}