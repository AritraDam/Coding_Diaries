#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};
int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(curr == inorder[i])
        return i;
    }
}
Node* buildTree(int preorder[],int inorder[],int start,int end){
    static int indx = 0;
    if(start>end)
    return NULL;
    int curr = preorder[indx];
    Node* node = new Node(curr);
    indx++;
    int pos = search(inorder,start,end,curr);
    if(start == end)
    return node;
    node->left = buildTree(preorder,inorder,start,pos-1);
    node->right = buildTree(preorder,inorder,pos+1,end);

}

void inorderPrint(Node* root){
    if(root == NULL)
        return;
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

int main(){
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};

    inorderPrint(buildTree(preorder,inorder,0,4));
    return 0;

}