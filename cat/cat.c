#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int main(int param_a, char** param_b){
    char ca;
    int x = 1;

    while(x < param_a){
        FILE *fileDir = fopen(param_b[x], "r");     //opens the file i.e fopen in READ MODE i.e r which is one of the modes for opening a file
        if(fileDir < 0){
            perror(param_b[x]);
            return -1;
        }
        while((ca = getc(fileDir)) != EOF){         //getc() is a builtin function that reads a char from a file. this line will reading char by char until it equals to EOF
            write(1, &ca, 1);
        }
        fclose(fileDir);            //close a file 
        x++;
    }
    return 0;
}