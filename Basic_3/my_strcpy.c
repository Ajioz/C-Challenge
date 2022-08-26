char* my_strcpy(char* param_1, char* param_2){
    int count, i;
    for (i = 0, count=0; param_2[i] != '\0'; i++, count++){
      param_1[count] = param_2[i];
    }
    param_1[count] = '\0';

    return param_1;
}