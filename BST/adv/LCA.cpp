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
    ~BinaryTreeNode() {
        if (left) delete left;
        if (right) delete right;
    }
};
int getLCA(BinaryTreeNode<int>* root , int val1 , int val2){
    // Write your code here
    if(root==NULL)
    {
        return -1;
    }
    if(root->data==val1 || root->data==val2)
    {
        return root->data;
    }
    if(val1>=root->data && val2>=root->data)
    {
        return getLCA(root->right,val1,val2);
    }
    if(val1<root->data && val2<root->data)
    {
        return getLCA(root->left,val1,val2);
    }
    int ans1= getLCA(root->left,val1,val2);
    int ans2= getLCA(root->right,val1,val2);
    if(ans1!=-1 and ans2!=-1)
    {
        return root->data;
    }
    else if(ans1!=-1)
    {
        return ans1;
    }
    else{
        return ans2;
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
    int a, b;
    cin >> a >> b;
    cout << getLCA(root, a, b);
    delete root;
}