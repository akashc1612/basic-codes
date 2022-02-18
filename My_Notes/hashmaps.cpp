#include <iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main()
{
    unordered_map<string,int>ourmap;
    
    //To insert elements in unordered_map
    ourmap["abc"]=2;    //we can treat it just like array to insert values
    ourmap["def"]=3;
    
    //To get the elements
    cout<<ourmap["abc"]<<endl;
    cout<<ourmap["ghi"]<<endl;        //creates a space for ghi as ghi was not present ; ghi is initialised to 
    
    //To check presence of a string 
    if(ourmap.count("ghi")>0)
    {
        cout<<"ghi is present"<<endl;
    }
    
    //To check size of unordered_map
    cout<<"size :"<<' '<<ourmap.size()<<endl;  //returns the no of unique strings present in map
    
    //To erase a string in map
    ourmap.erase("ghi");       //ghi ka wajood khatam krdega
    
    if(ourmap.count("ghi")>0)
    {
        cout<<"ghi is present"<<endl;
    }

    return 0;
}