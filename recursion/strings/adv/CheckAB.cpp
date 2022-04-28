bool checkAB(char input[]) {
	// Write your code here
   if(input[0]=='\0')
   {
       return true;
   }
    if(input[0]=='b')
    {
        return false;
    }
    if(input[0]=='a')
    {
        if(input[1]=='a')
        {
            return checkAB(input+2);
        }
        else if(input[1]=='b' && input[2]=='b')
        {
            if(input[3]=='\0'||input[3]=='a')
            {
                return true;
            }
            else if(input[3]=='b')
            {
                return false;
            }
        }
        return false;
       }
    return false;
}



