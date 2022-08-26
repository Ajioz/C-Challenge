char* my_upcase(char* param_1)
{
   int len = strlen(param_1)+1;
   char ch[len];
   int run=0;
   while(run<=len){
       if(*param_1 == '\n'){
           break;
       }
       ch[run] = *param_1;
       param_1++;
       run++;
   } 
   for(int i = 0;i<len; i++){
        if(ch[i]>= 97 && ch[i]<=122){
            int indx = ch[i] -97;
            ch[i]  = 65+indx;
        }
    }
     
    return strdup(ch);
}