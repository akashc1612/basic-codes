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

void print(vector<int>&v,int sum)
{
    int si=0;
    int ei=v.size()-1;
    while(si<ei)
    {
        if(v[si]+v[ei]==sum)
        {
            cout<<v[si]<<' '<<v[ei]<<endl;
            si++;
            ei--;
        }
        else if(v[si]+v[ei]>sum)
        {
            ei--;
        }
        else if(v[si]+v[ei]<sum)
        {
            si++;
        }
    }
}
void helper(BinaryTreeNode<int> *root,vector<int>&v)
{
    if(root==NULL)
    {
        return;
    }
    helper(root->left,v);
    helper(root->right,v);
    v.push_back(root->data);
}
void pairSum(BinaryTreeNode<int> *root, int sum) {
    // Write your code here
    if(root==NULL)
    {
        return;
    }
    vector<int>v;
    helper(root,v);
    sort(v.begin(),v.end());
    print(v,sum);
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
    int sum;
    cin >> sum;
    pairSum(root, sum);
    delete root;
}