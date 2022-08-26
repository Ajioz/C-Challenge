int my_isspace(char param_1){

if( (param_1 >= 0   && param_1<= 47)  || 
			 (param_1 >= 58  && param_1<= 64)  ||
			 (param_1 >= 91  && param_1<= 96)  ||
			 (param_1 >= 123 && param_1<= 127))
		{
			return 1;
		}else{
            return 0;
        }
}