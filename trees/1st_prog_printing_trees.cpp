#include <iostream>
#include<vector>
using namespace std;
template<typename T>
class TreeNode{
  public:
  T data;
  vector<TreeNode*>children;
  TreeNode(T data)
  {
      this->data=data;
  }
};
void print(TreeNode<int>* root)
{
    cout<<root->data<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        print(root->children[i]);
    }
}
int main()
{
TreeNode<int>*root=new TreeNode<int>(10);
TreeNode<int>*node1=new TreeNode<int>(20);
TreeNode<int>*node2=new TreeNode<int>(30);
TreeNode<int>node3(40);
root->children.push_back(node1);
root->children.push_back(node2);
root->children.push_back(&node3);
print(root);
    return 0;
}
