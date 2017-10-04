// import libraries
// *******************************************
#include <stdio.h>
#include <string.h>
#include <stdio.h>

// internal functions
// *******************************************
char *read_input_line(void){

  	char *line = NULL;
  	ssize_t bufsize = 0; // have getline allocate a buffer for us
  	getline(&line, &bufsize, stdin);
  	
  	return line;
}




void interactive_mode_handler(){

    char *user_command;

    while(1){

        // 01_get user command
        printf("\nShell >> ");
   		user_command=read_input_line();
   		//scanf("%s", &user_command);

        // 02_handler user command
        //handle_single_command(command);
        printf("\nYour Command Is : %s", user_command);
    }

    

}

// main functions
// *******************************************
int main(){

	interactive_mode_handler();
    return 0;
  }




