char *my_strstr(const char *param_1, const char *param_2){
    int n = strlen(param_2);
    while(*param_1)
        if(!memcmp(param_1++, param_2, n))
            return (char *) (param_1-1);
    return 0;
}