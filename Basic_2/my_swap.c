void my_swap(int* param_1, int* param_2){
	int ptr = *param_1;
	*param_1 = *param_2;
	*param_2 = ptr;
}