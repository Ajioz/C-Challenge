#include <stdio.h> 
#include <stdlib.h> 
int* my_range(int param_1, int param_2){ 
    int difference = param_2 - param_1;
    int* range = malloc(difference * sizeof(int));
    int i;
    for (i=0, param_1; param_1 < param_2; param_1++, i++) 
    range[i] = param_1; 
    return range;
}