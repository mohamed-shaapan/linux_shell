// import libraries
// *******************************************
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// internal functions
// *******************************************
int execute_single_command(char **args){

  pid_t pid;
    int status;

    pid = fork();
    if (pid == 0) {
      // Child process
      if (execvp(args[0], args) == -1) {
        perror("lsh");
      }
      exit(EXIT_FAILURE);
    } else if (pid < 0) {
      // Error forking
      perror("lsh");
    } else {
      // Parent process
      do {
        waitpid(pid, &status, WUNTRACED);
      } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }

    return 1;
}
// *******************************************
// *******************************************
void handle_single_command(char *line){

    // 01_parse line to get arguments
    char **args=parse_line(line);

    // 02_execute command
    execute_single_command(args);

}

void run_batch_commands(char **)


// main functions
// *******************************************
int main(){

    // 01_read file from disk
    char *file_directory="/home/shaapan/Desktop/script.txt";
    char **file_as_list=read_file();

    // 02_implement commands

    run_single_command(args);

    return 0;
}




