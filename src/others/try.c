// import libraries
// *******************************************
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// main function
// *******************************************
int main() {

  
	char *pointer="mohamed shaapan";

	char string[100];
	strcpy(string, pointer);

	pointer="text changed";

	printf("%s", string);


  return 0;

}


