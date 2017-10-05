// import libraries
// *******************************************
#include "environment_variables.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// internal functions
// *******************************************
void initialize_environment(){

  //environment_variables=malloc(50*sizeof(struct variable));
  environment_variables=malloc(BUFFSIZE*sizeof(struct variable));

  struct variable PATH;
  PATH.key="PATH";
  PATH.value="/home/bin";

  struct variable HOME;
  HOME.key="HOME";
  HOME.value="/home/shaapan/";

  environment_variables[0]=PATH;
  environment_variables[1]=HOME;

  variables_count=2;

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

  struct variable result;
  return result;

}

// *******************************************
void set_variable(char *key, char *value){

  // look for variable
  struct variable var=get_variable(key);

  if(var.key!=NULL){
    // variable exists in environment
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

