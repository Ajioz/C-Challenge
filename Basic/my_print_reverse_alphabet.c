#include <unistd.h>

void my_print_reverse_alphabet(){
    char i;
	for(i='z'; i>='a'; i--)
	{
        write(1,  &i, 1);
	}
    i = '\n'; 
    write(1,  &i, 1);
}