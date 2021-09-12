void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
    int startrow=0;
    int startcol=0;
    int endrow=nRows-1;
    int endcol=nCols-1;
    while(startcol<=endcol and startrow<=endrow)
    {
     for(int col=startcol;col<=endcol;col++)
     {
         cout<<input[startrow][col]<<' ';
     }
     for(int row=startrow+1;row<=endrow;row++)
     {
         cout<<input[row][endcol]<<' ';    
     }
     for(int col=endcol-1;col>=startcol;col--)
     {
         if(startrow==endrow)
         {
             break;
         }
         cout<<input[endrow][col]<<' ';
     }
    for(int row=endrow-1;row>=startrow+1;row--)
    {
        if(startcol==endcol)
        {
            break;
        }
        cout<<input[row][startcol]<<' ';
    }
        startrow++;
        startcol++;
        endrow--;
        endcol--;
    }
}