char* my_strncpy(char* param_1, char* param_2, int param_3){
    // take a pointer pointing to the beginning of the destination string
    char* ptr = param_1;
    // copy first `num` characters of C-string pointed by source
    // into the array pointed by destination
    while (*param_2 && param_3--)
    {
        *param_1 = *param_2;
        param_1++;
        param_2++;
    }
    *param_1 = '\0';
    return ptr;
}