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

int count(Node* root){
    if(root == NULL)
    return 0;
    return count(root->left)+count(root->right)+1;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<count(root);
    return 0;
}