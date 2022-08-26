#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>
#include <string.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array{
    int size;
    char** array;
} string_array;
#endif

int my_putchar(char c){ 
    return write(1, &c, 1);
}

void my_print_words_array(string_array* param_1){
    int my_size = param_1 -> size;
    char** ptr_arr =  param_1 -> array;
    for(int i = 0; i < my_size; i++){
        for(int j = 0; j<strlen(ptr_arr[i]); j++){
            my_putchar(ptr_arr[i][j]);
        }
        my_putchar('\n');
    }  
}

