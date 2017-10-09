// import libraries
// *******************************************
#include "../operating_environment/environment_variables.h"
#include "../utilities/command_history_handler.h"
#include "../utilities/display_handler.h"

#include "special_command_execution.h"

#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



// helping function
// *****************************************
void parse_equation(char *equation, char *return_key, char *return_value){

  // read operand name
  int index=0;
  while(equation[index]!='='){

    return_key[index]=equation[index];
    index++;

  }

  // read assignment value
  index++; int value_index=0;
  while(equation[index]!='\0'){

    return_value[value_index]=equation[index];
    value_index++;
    index++;

  }
  
}


// cd command
// *******************************************
void cd_command(char *new_directory){


  if(new_directory[0]=='~'){
  //if(strcmp(new_directory, "~")==0){
    chdir(get_variable("HOME").value);
  }else{
    chdir(new_directory);
  }

  

}

// history command
// *******************************************
void history_command(){

  // read file from disk
  char **history_list=get_command_history();
  // display history
  print_list(history_list);

}

// log command
// *******************************************
void log_command(){
  
  // read file from disk
  char **logs_list=get_command_history();
  // display history
  print_list(logs_list);

}

// log command
// *****************************************
void exit_command(){

  exit(EXIT_SUCCESS);

}

// echo command
// *****************************************
void echo_command(char **args){

  int index=1;
  while(args[index]!=NULL){

    if(args[index][0]=='$'){

      // 01_if argument = variable
      char *var_name=&args[index][1];

      char *var=get_variable(var_name).value;
      printf("%s ", var);

    }else{

      // 02_if argument = variable
      printf("%s ", args[index]);

    }

    index++;  
  }

}

// SET command
// *****************************************
int set_command(char *arg){

  int index=0;
  while(arg[index]!='\0'){

    if(arg[index]=='='){

      // this is an assignment command
      char *key=malloc(64*sizeof(char));
      char *value=malloc(64*sizeof(char));

      parse_equation(arg, key, value);

      set_variable(key, value);

      return 1;

    }

    index++;

  }

  // this is a basic command
  return 0;

}



// interface function
// *****************************************************************
// *****************************************************************
int execute_special_command(char **args, int foreground_flag){

    //printf("\nCommand Entered : %s\n", args[0]);

    if(strcmp(args[0], "cd")==0){
      //chdir(args[1]);
      cd_command(args[1]);
      return 1;
    }

    // **************************************
    if(strcmp(args[0], "history")==0){
      history_command();
      return 1;
    }

    // **************************************
    if(strcmp(args[0], "log")==0){
      log_command();
      return 1;
    }

    // **************************************
    if(strcmp(args[0], "exit")==0){
      exit_command();
      return 1;
    }

    /*if(args[0][0]==12){
      exit_command();
      return 1;
    }*/

    // **************************************
    if(strcmp(args[0], "echo")==0){
      echo_command(args);
      return 1;

    }

    // **************************************
    if(args[1]==NULL){
      return set_command(args[0]);

    }
    // **************************************

    return 0;

}





