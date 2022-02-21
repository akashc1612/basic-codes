void reverseEachWord(char input[]) {
    // Write your code here
    int startindex=0;
    for(int i=0;i<=strlen(input);i++)
    {
        if(input[i]==' ' || input[i]==NULL)
        {
            int endindex=i-1;
            while(startindex<endindex)
            {
                char temp=input[startindex];
                input[startindex]=input[endindex];
                input[endindex]=temp;
                startindex++;
                endindex--;
            }
            startindex=i+1;
        }
    }
}