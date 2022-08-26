#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
struct s_integer_array{
    int size;
    int* array;
}integer_array;
#endif


bool my_is_sort(struct s_integer_array* param){
    if(param->size <= 1){
    	 return true;
	} 
    int ascending = 1;                     
    int descending = 1;                   
    int record = param->array[0];    
    int now;                     

    for(int i = 0; i < param->size; i++, record = now){
        if (!(ascending ||  descending))break;   
            now = param->array[i]; 
            int difference = now - record; 
            if(difference == 0)continue;           
            if(difference < 0) ascending = 0;
            else descending = 0;
    }
    return (ascending ||  descending) ? true : false;
}
