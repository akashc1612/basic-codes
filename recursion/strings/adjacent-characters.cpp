void pairStar(char input[]) {
 if(input[0]=='\0')
    {
        return;
    }
    if(input[0]==input[1])
    {
        int i;
        for( i=strlen(input);i>=1;i--)
        {
            input[i+1]=input[i];
        }
        input[i+1]='*';
        pairStar(input+1);
    }
    else
        pairStar(input+1);
}
