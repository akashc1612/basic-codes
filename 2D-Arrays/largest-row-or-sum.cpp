#include<climits>
void findLargest(int **input, int nRows, int mCols)
{
    //Write your code here
    int row_index,sum=0,largest1=INT_MIN;
    for(int i=0;i<nRows;i++)
    {    sum=0;
        for(int j=0;j<mCols;j++)
        {
            sum=input[i][j]+sum;
        }
     if(sum>largest1)
     {
         largest1=sum;
         row_index=i;
     }
    }
    int col_index,sum2=0,largest2=INT_MIN;
    for(int j=0;j<mCols;j++)
    {
        sum2=0;
        for(int i=0;i<nRows;i++)
        {
            sum2=input[i][j]+sum2;
        }
        if(sum2>largest2)
        {
            largest2=sum2;
            col_index=j;
        }
    }
    if(largest1>=largest2)
    {
        cout<<"row"<<' '<<row_index<<' '<<largest1;
    }
    else if(largest2>largest1)
         cout<<"column"<<' '<<col_index<<' '<<largest2;
    
}