float geometricSum(int k)
{
 if(k==0)
   {
       return 1;
   }
    float last=(1/pow(2,k));
    float smallans=geometricSum(k-1);
    return smallans+last;
    
}
