/*
* Passing parameters to your program when called via Terminal
* 1) "gcc program.c"   --> compile program
* 2) ./a.out [par1] [par2]
*/


#include<stdio.h>

int main(int argc, char **argv){

    printf("\nProgram = %s", argv[0]);

    printf("\narg[1] = %s", argv[1]);
    printf("\narg[2] = %s", argv[2]);

    printf("\n");

    return 0;
}