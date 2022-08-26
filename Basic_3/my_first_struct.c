#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array{
    int size;
    int* array;
} integer_array;
#endif


void my_first_struct(struct s_integer_array* param){
    printf("%i\n", param->size);
    for(int x = 0; x < param->size; x++){
        printf("%i\n", param->array[x]);
    }
}