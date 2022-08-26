int my_strcmp(char* param_1, char* param_2){
	int my_size = strlen(param_1) - 1;
	int my_size2 = strlen(param_2) - 1;
	if(my_size > my_size2) return -1;
	else if(my_size < my_size2)	return 1;
	else return 0;
}