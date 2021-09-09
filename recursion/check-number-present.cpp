bool checkNumber(int input[], int size, int x) {
    if(size==1)
    {
        if(input[0]==x)
        {
            return true;
        }
        else 
            return false;
    }
    bool smalloutput=checkNumber(input+1,size-1,x);
     if(smalloutput)
     {
         return true;
     }
          else if(input[0]==x)
          {
              return true;
          }
      else
          return false;
}