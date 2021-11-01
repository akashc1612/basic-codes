#include<iostream>
#include "Solution.h"
using namespace std;

int partition(int input[],int si,int ei)
{
    int count=0;
    int pivot=input[si];
    for(int i=si+1;i<=ei;i++)
    {
        if(input[i]<=pivot)
        {
            count++;
        }
    }
    int temp=input[si];
    input[si]=input[si+count];
    input[si+count]=temp;
    
    int pivot_index=si+count;
    int i=si,j=ei;
    while(i<pivot_index and j>pivot_index)
    {
        if(input[i]<=pivot)
        {
            i++;
        }
        else if(input[j]>pivot)
        {
            j--;
        }
        else{
            int temp=input[i];
            input[i]=input[j];
            input[j]=temp;
            i++;
            j--;
        }
    }
    return pivot_index;
}
void helper(int input[],int si,int ei)
{
    if(si>=ei)
    {
        return;
    }
    int p=partition(input,si,ei);
    helper(input,si,p-1);
    helper(input,p+1,ei);
}
void quickSort(int input[], int size) {
int ei=size-1,si=0;
    helper(input,si,ei);
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}
