#include <unistd.h>

void my_print_alphabet(){
	for(char c='A'; c <= 'Z'; c++){
	    write(1, &c, 1);
	}
    char z = '\n'; 
    write(1,  &z, 1);
}