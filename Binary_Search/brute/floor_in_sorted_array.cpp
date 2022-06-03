int minindex=-1;
    int minsearch=INT_MAX;
    //Your code here
    for(int i=0;i<N;i++)
    {
        if(arr[i]<=x)
        {
            minsearch=arr[i];
            minindex=i;
        }
        else if(arr[i]>x)
        {
            break;
        }
    }
    return minindex;