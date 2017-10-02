// 01_import system libraries
// **********************************
#include <stdio.h>
#include <limits.h>

// run application
// **********************************
int main() {

	
	// gets & puts (reading string variables)
 	// *****************************************
	char string_var[512];
	printf("Shell >> ");
	gets(string_var);

	printf("Your Command Is : ");
	puts(string_var);
    
   	return 0;
   
}