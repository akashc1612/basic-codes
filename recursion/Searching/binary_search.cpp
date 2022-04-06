#include <iostream>
using namespace std;
int binarySearch(int input[],int si,int ei,int element)
{
    if(si>ei)
    {
        return -1;
    }
    int mid=(si+ei)/2;
    if(input[mid]==element)
    {
        return mid;
    }
    if(element>input[mid])
    {
         int ans1= binarySearch(input,mid+1,ei,element);
        if(ans1)
        {
            return ans1;
        }
    }
     if(element<input[mid])
    {
         int ans2= binarySearch(input,si,mid-1,element);
        if(ans2)
        {
            return ans2;
        }
    }
    return -1;
    
}
int binarySearch(int input[], int size, int element) {
    // Write your code here
  int si=0;
    int ei=size-1;
    return  binarySearch(input,si,ei,element);
    
}

int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
