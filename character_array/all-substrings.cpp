void printSubstrings(char str[]){
  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   * Print output as specified in the question.
*/
    for(int i=0;i<strlen(str);i++)
    {
        for(int j=i;j<strlen(str);j++)
        {
            int k=i;
            while(k<=j)
            {
                cout<<str[k];
                k++;
            }
            cout<<endl;
        }
    }
    
}