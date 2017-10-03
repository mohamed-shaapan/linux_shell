// import libraries
// *******************************************


// main functions
// *******************************************
#define BUF 128 /* can change the buffer size as well */
#define TOT 10 /* change to accomodate other sizes, change ONCE here */

int main(void) {

    char commands_list[TOT][BUF];
    int i = 0;
    int total = 0;


    char *file_directory="batch_script.txt";
    FILE *file_pointer = fopen(file_directory, "r");

    while(fgets(commands_list[i], BUF, file_pointer)) {
        /* get rid of ending \n from fgets */
        commands_list[i][strlen(commands_list[i]) - 1] = '\0';
        i++;
    }

    total = i;

    for(i = 0; i < total; ++i)
        printf("%s\n", commands_list[i]);

    return 0;
}