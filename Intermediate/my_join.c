#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>
#include <string.h>
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

char* my_join(string_array* param_1, char* param_2){
         int my_size = param_1 -> size;
         char** my_array =  param_1 -> array;
         if(my_size==0 ){
             return NULL;
         }
         char* join = param_2;
         char* phrase = malloc(4*my_size* sizeof(char));
         for(int i = 0; i < my_size; i++){
               strcat(phrase, my_array[i]);
               if (i!=my_size-1){
                strcat(phrase, join);
               }
        }
        return phrase;
}
