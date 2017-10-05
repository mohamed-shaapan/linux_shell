// import libraries
// *******************************************
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// functions to test
// *******************************************
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

// main function
// *******************************************
int main() {

  

	char *equation="name=mohamed";

	char *key=malloc(20*sizeof(char));
	char *value=malloc(20*sizeof(char));

	parse_equation(equation, key, value);

	printf("\nKey = %s\tValue = %s", key, value);


  return 0;

}


