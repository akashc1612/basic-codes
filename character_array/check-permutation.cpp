bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    if(strlen(input1)!=strlen(input2))
    {
        return false;
    }
    char arr[256]={0};
    for(int i=0;i<strlen(input1);i++)
    {
        arr[input1[i]]++;
    }
    for(int j=0;j<strlen(input2);j++)
    {
        arr[input2[j]]--;
    }
    for(int k=0;k<256;k++)
    {
        if(arr[k]==0)
        {
            continue;
        }
            return false;
    }
   return true;
}