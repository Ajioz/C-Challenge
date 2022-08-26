char* my_strdup(char* param_1){     
    int my_len = strlen(param_1);
    char* copied = malloc(my_len * sizeof(char));
    for(int i = 0; i < my_len; i++, param_1++){
        copied[i] = *(param_1);
    }
    return copied;
}