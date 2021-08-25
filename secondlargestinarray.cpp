#include<climits>
#include<algorithm>
bool compare(int a,int b)
{
    return a>b;
}
int findSecondLargest(int *input, int size)
{
 if(size<=1)
    {
        return INT_MIN;
    }
    bool issorted=0;
    for(int i=0;i<size-1;i++)
    {
        if(input[i]==input[i+1])
        {
            issorted=1;
            continue;
        }
        issorted=0;
    }
    if(issorted)
    {
        return INT_MIN;
    }
    
    int index,max;
    sort(input,input+size,compare);
    for(int i=1;i<size;i++)
    {
         max=input[0];
        if(max>input[i])
        {
            index=i;
            break;
        }
    }
    return input[index];
}