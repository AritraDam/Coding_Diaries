#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data =d;
        left = NULL;
        right = NULL;
    }
};

Node* Bst(Node* root,int val){
    if(root== NULL)
    {
        return new Node(val);
    }
    if(root->data>val)
    root ->left = Bst(root->left,val);

    else{
        root->right = Bst(root->left,val);
    }

    return root;
}

int main(){
    
}