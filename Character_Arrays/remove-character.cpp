void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here
    int j=0;
    for(int i=0;i<strlen(input);i++)
    {
        if(input[i]!=c)
        {
            input[j]=input[i];
            j++;
        }
    }
    input[j]=NULL;
}
