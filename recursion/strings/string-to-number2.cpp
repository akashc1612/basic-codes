int stringToNumber(char input[]){
   if(input[0])
   {
       int num;
       num=atoi(input);
       return num;
   }
    stringToNumber(input+1);
}