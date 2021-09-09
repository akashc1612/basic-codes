 int firstIndex(int input[], int size, int x) {
 if(size==0)
  {
      return -1;
  }
    if(size==1 and input[0]==x)
    {
        return 0;
    }
   if(input[0]==x)
   {
       return 0;
   }
    int index=firstIndex(input+1,size-1,x);
    if(index==-1)
    {
        return -1;
    }
    else
        return index+1;
}
