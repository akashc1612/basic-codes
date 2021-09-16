#include<iostream>
#include<cstring>
using namespace std;
// input - given string
// You need to update in the given string itself. No need to print or return anything
void reverseStringWordWise(char input[]) {
    // Write your code here
  int i=0,j=strlen(input)-1;
    while(i<j)
    {
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
      int startindex=0;
    for(int k=0;k<=strlen(input);k++)
    {    
        if(input[k]==' ' || input[k]==NULL)
        {
             int endindex=k-1;
            while(startindex<endindex)
            {
                char temp=input[startindex];
                input[startindex]=input[endindex];
                input[endindex]=temp;
                startindex++;
                endindex--;
            }
            startindex=k+1;
        }
    }
   
}
