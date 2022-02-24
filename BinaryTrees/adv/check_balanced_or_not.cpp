#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int heightl(BinaryTreeNode<int> *root,int height)
{
    if(root==NULL)
    {
        return 0;
    }
    int rec1=heightl(root->left,height+1);
    int rec2=heightl(root->right,height+1);
    int maxm=max(rec1,rec2);
    return maxm+1;
}
int heightr(BinaryTreeNode<int> *root,int height)
{
    if(root==NULL)
    {
        return 0;
    }
    int rec1=heightr(root->left,height+1);
    int rec2=heightr(root->right,height+1);
    int maxm=max(rec1,rec2);
    return maxm+1;
}
bool isBalanced(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL)
    {
        return true;
    }
    int height=0;
    int recl=heightl(root->left,height);
    int recr=heightr(root->right,height);
   int maxm=max(recl,recr);
    int minm=min(recl,recr);
    if((maxm-minm)<=1 and isBalanced(root->left)and isBalanced(root->right))
    {
        return true;
    }
    else {
        return false;
    }
}

BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    cout << (isBalanced(root) ? "true" : "false");
}