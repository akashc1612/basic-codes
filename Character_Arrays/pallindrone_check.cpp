bool checkPalindrome(char str[]){
int i=0,j=strlen(str)-1;
    bool ispallindrome=1;
    while(i<j)
    {
        if(str[i]==str[j])
        {
            ispallindrome=1;
            i++;
            j--;
        }
        else
            return false;
    }
    return ispallindrome;
}
