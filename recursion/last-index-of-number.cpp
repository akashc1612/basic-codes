int lastIndex(int input[], int size, int x) {
  if(size==0)
    {
        return -1;
    }
    if(size==1 and input[0]==x)
    {
        return 0;
    }
    int index=lastIndex(input+1,size-1,x);
       if(index==-1 and input[0]==x)
       {
           return 0;
       }
    else if(index>-1)
    {
        return index+1;
    }
    else 
        return -1;
}