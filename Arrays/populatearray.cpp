 void arrange(int *arr, int n)
{
int index=0,odd=1,even=2;
  for(int i=0;i<=(n-1)/2;i++)
  {
      arr[i]=odd;
      odd+=2;
      index++;
  }
for(int i=n-1;i>=index;i--)
{
    arr[i]=even;
    even+=2;
} 
}