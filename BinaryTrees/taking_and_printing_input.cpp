#include <iostream>
using namespace std;
template<typename T>
class BinaryTreeNode{
  public:
  T data;
  BinaryTreeNode*left;
  BinaryTreeNode*right;
  BinaryTreeNode(int data)
  {
      this->data=data;
      left=NULL;
      right=NULL;
  }
  ~BinaryTreeNode()
  {
      delete left;
      delete right;
  }
};
void print(BinaryTreeNode<int>*root)
{
 if(root==NULL)
 {
     return;
 }
 cout<<root->data<<':';
 if(root->left!=NULL)
 {
     cout<<'L'<<root->left->data;
 }
 if(root->right!=NULL)
 {
     cout<<'R'<<root->right->data;
 }
 cout<<endl;
 print(root->left);
 print(root->right);
}
BinaryTreeNode<int>*takeinput()
{
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL; 
    }
    BinaryTreeNode<int>*root=new BinaryTreeNode<int>(data);
    BinaryTreeNode<int>*left=takeinput();
    BinaryTreeNode<int>*right=takeinput();
    root->left=left;
    root->right=right;
    return root;
}
int main()
{
   BinaryTreeNode<int>*root=takeinput();
   print(root);

    return 0;
}