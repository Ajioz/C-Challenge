char* my_downcase(char* param_1)
{
   int len = strlen(param_1)+1;
   
   char ch[len];
  
   int x=0;
   while(x<=len){
       if(*param_1 == '\n'){
           break;
       }
       ch[x] = *param_1;
       param_1++;
       x++;
   } 
  
   for(int run = 0;run<len; run++){
        if(ch[run]>= 65 && ch[run]<=90){
            int indx = ch[run] -65;
            ch[run]  = 97 +indx;
        }
    }
  return strdup(ch);

}