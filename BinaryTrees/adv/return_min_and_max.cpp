#include <iostream>
#include <queue>
#include<climits>
#include<algorithm>
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

int getmin(BinaryTreeNode<int> *root)
{
    if(root==NULL )
    {
        return INT_MAX;
    }
    int minn=root->data;
    int minl=getmin(root->left);
    int minr=getmin(root->right);
    int minrec=min(minl,minr);
    return min(minrec,minn);
}
int getmax(BinaryTreeNode<int> *root)
{
     if(root==NULL )
    {
        return INT_MIN;
    }
    int maxx=root->data;
    int maxl=getmax(root->left);
    int maxr=getmax(root->right);
    int maxrec=max(maxl,maxr);
    return max(maxrec,maxx);
}
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL)
    {
        return make_pair(INT_MAX,INT_MIN);
    }
    else if(root->left==NULL and root->right==NULL)
    {
        return make_pair(root->data,root->data);
    }

    int max=getmax(root);
    int min=getmin(root);
     
    return make_pair(min,max);
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
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    pair<int, int> ans = getMinAndMax(root);
    cout << ans.first << " " << ans.second;
}