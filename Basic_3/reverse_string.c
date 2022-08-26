#include <stdio.h>


char* reverse_string(char* param_1){
    int my_size = strlen(param_1) - 1;
    char* new_tr; 
    int count, i;
    for (i = my_size, count=0; param_1[i] != '\0'; i--, count++){
      new_tr[count] = param_1[i];
    }
    new_tr[count] = '\0';

    return new_tr;
}
