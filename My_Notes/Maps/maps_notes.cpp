int main()
{
    map<int,int>m;
    //To insert elements -- INSERTION takes place in O(log(n))
    m[0]=12;
    m[1]=13;
    m[2]=12;
    //To insert elements   O(log(n))
    m.insert({3,11});
     map<int,int>::iterator it;
     for(it=m.begin();it!=m.end();it++)
     {
         //Output is printed in sorted manner
         cout<<it->first<<' '<<it->second<<endl; //in maps everything is stored in pairs
     }
     //shortcut to print
     for(auto &pr:m)
     {
         cout<<pr.first<<' '<<pr.second<<endl;
     }
     //finding a key in maps O(Log(N))
     it=m.find(3); //find returns an iterator pointer
     cout<<it->first<<endl;
     auto itt=m.find(7);
     if(itt==m.end())
     {
         cout<<"No value corresponding found"<<endl;
     }
     else
     cout<<itt->first<<' '<<itt->second;
     
     //To delete value of key and corresponding value
     m.erase(2); //Takes key as input ; Can also take iterator as an input
     for(auto &pr:m)
     {
         cout<<pr.first<<' '<<pr.second<<endl;
     }
    return 0;
}