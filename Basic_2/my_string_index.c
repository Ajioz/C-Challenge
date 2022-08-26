int my_string_index(char* param_1, char param_2){
    int count = 0;
    for(int i=0; param_1[i] != '\0'; i++){
        if(param_1[i] == param_2) return i;
    }
    if(count == 0) return -1;
}