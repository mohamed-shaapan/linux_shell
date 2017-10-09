// import libraries
// *******************************************
#include "environment_variables.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>



// internal functions
// *******************************************
void initialize_environment(){

  //environment_variables=malloc(50*sizeof(struct variable));
  environment_variables=malloc(BUFFSIZE*sizeof(struct variable));

  struct variable PATH;
  PATH.key="PATH";
  //PATH.value="/home/bin";
  PATH.value=getenv("PATH");

  struct variable HOME;
  HOME.key="HOME";
  //HOME.value="/home/shaapan/";
  HOME.value=getenv("HOME");

  environment_variables[0]=PATH;
  environment_variables[1]=HOME;

  variables_count=2;


  //program_directory=malloc(100*sizeof(char));
  getcwd(program_directory, sizeof(program_directory));
  printf("\nOriginal Directory : %s", program_directory);

}

// *******************************************
char *get_program_directory(){
  return program_directory;
}

// *******************************************
struct variable get_variable(char *key){

  int index=0;
  while(environment_variables[index].key!=NULL){

    int match=strcmp(environment_variables[index].key, key);
    if(match==0){

      return environment_variables[index];

    }

    index++;
  
  }

  struct variable system_var;
  //system_var.key=key;
  system_var.value=getenv(key);

  if(system_var.value==NULL){
    system_var.value="variable not found";
  }

  //printf("\nBASH : %s\n", getenv("BASH"));


  return system_var;

}

// *******************************************
void set_variable(char *key, char *value){

  // look for variable
  struct variable var=get_variable(key);

  if(var.key!=NULL){
    // variable exists in environment
    //printf("\nKEY != NULL\n");
    strcpy(var.value, value);

  }else{
    // variable doesn't exist in environment
    struct variable new_var;
    new_var.key=key;
    new_var.value=value;

    environment_variables[variables_count]=new_var;
    variables_count++;

  }



}

