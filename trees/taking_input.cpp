#include <iostream>
#include<vector>
#include<queue>
using namespace std;
class TreeNode{
    public:
  int data;
  vector<TreeNode*>children;
  TreeNode(int data)
  {
      this->data=data;
  }
};
TreeNode * takeinput()
{
    int data;
    cout<<"Enter the data of root node"<<endl;
    cin>>data;
    TreeNode*root=new TreeNode(data);
    queue<TreeNode*>pendingnodes;
    pendingnodes.push(root);
    while(!pendingnodes.empty())
    {
        TreeNode*front=pendingnodes.front();
        pendingnodes.pop();
        int child;
        cout<<"Enter the total number of childrens of "<<front->data<<endl;
        cin>>child;
        for(int i=0;i<child;i++)
        {
            cout<<"Enter the "<<i<<" th child of "<<front->data<<endl;
            int childdata;
            cin>>childdata;
            TreeNode * node=new TreeNode(childdata);
            pendingnodes.push(node);
            front->children.push_back(node);
        }
    }
    return root;
}
void print(TreeNode* root)
{
    cout<<root->data<<':';
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<',';
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        print(root->children[i]);
    }
}
int main()
{
    TreeNode* root=takeinput();
    print(root);

    return 0;
}
