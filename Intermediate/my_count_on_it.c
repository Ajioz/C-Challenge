
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

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


integer_array* my_count_on_it(string_array* param_1){
        int sizing_it = param_1 -> size;
        char** array =  param_1 -> array;
        int count = 0;
        int len[sizing_it];
        for(int i = 0; i < sizing_it; i++){
            count = 0;
            for(int j = 0; j<strlen(array[i]); j++){
                count++;
          }
            len[i] = count;

        }
        
        integer_array* my_arr = malloc(sizeof(integer_array)); 
        my_arr -> size= sizing_it;
        my_arr -> array = len;
        return my_arr;


}
