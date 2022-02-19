#include <iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
  
    unordered_map<string,int>mymap;
    mymap["abc"]=1;
    mymap["def"]=2;
    mymap["ghi"]=3;

      //Iterators are used to iterate through all the keys in the map 
      unordered_map<string,int>::iterator it =mymap.begin(); //initialising iterator 
      while(it!=mymap.end())
      {
          cout<<"Key:"<<it->first<<"  "<<"Value:"<<it->second<<endl; //it->first gives key ; it->second gives value 
              it++;                                                       //corresponding to key
      }
    return 0;
}

//for ordered maps 
/*
#include <iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
  
    map<string,int>mymap;
    mymap["abc"]=1;
    mymap["def"]=2;
    mymap["ghi"]=3;

      //Iterators are used to iterate through all the keys in the map 
      map<string,int>::iterator it =mymap.begin(); //initialising iterator 
      while(it!=mymap.end())
      {
          cout<<"Key:"<<it->first<<"  "<<"Value:"<<it->second<<endl; //it->first gives key ; it->second gives value 
              it++;                                                       //corresponding to key
      }
    return 0;
}*/