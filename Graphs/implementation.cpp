#include <iostream>

using namespace std;
void print(int **edges, int v,int sv,int * visited)
{
    cout<<sv<<' ';
    visited[sv]=1;
    for(int i=0;i<v;i++)
    {
        if(sv==i)
        {
            continue;
        }
        if(edges[sv][i]){
        if(visited[i])
        {
            continue;
        }
        print(edges,v,i,visited);
        }
    }
}
int main()
{
    int v,e;
    cin>>v>>e;
    int **edges=new int*[v];
    for(int i=0;i<v;i++)
    {
        edges[i]=new int[v];
        for(int j=0;j<v;j++)
        {
            edges[i][j]=0;
        }
    }
for(int i=0;i<e;i++)
{
    int sv,ev;
    cin>>sv>>ev;
    edges[sv][ev]=1;
    edges[ev][sv]=1;
}
 int *visited=new int[v];
 for(int i=0;i<v;i++)
 {
     visited[i]=0;
 }
   print(edges,v,0,visited);
    return 0;
}