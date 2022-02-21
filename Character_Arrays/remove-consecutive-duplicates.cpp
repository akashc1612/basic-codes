void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
    int k=strlen(input);
 for(int i=0;i<k;i++)
 {

     if(input[i+1]==input[i] )
     {
         for(int j=i;j<k;j++)
         {
             input[j]=input[j+1];             
         }
         k--;
         i--;
     }
     else
        continue;
 }
}
