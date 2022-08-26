char* my_strrchr(char* param_1, char param_2){
    const char *p = 0;
    for (;;) {
        if (*param_1 == (char)param_2)
            p = param_1;
        if (*param_1++ == '\0')
            return (char *)p;
    }
}