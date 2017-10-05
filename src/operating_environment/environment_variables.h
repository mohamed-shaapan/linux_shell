#ifndef ENVIRONMENT_VARIABLES_H_  /* Include guard */
#define ENVIRONMENT_VARIABLES_H_

/* 
	- This function should be responsible for ...
*/

// global variables
// *******************************************
struct variable {

   char *key;
   char *value;

};  

#define BUFFSIZE 100
struct variable *environment_variables;
int variables_count;


// internal functions
// *******************************************
void initialize_environment();

struct variable get_variable(char *key);

void set_variable(char *key, char *value);

//void delete_variable(char *key);



#endif // COMMANDS_H_