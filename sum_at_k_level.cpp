#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        data =d;
        left =NULL;
        right = NULL;
    }
};

int SumofLevel(Node* root,int K){
    if(root ==NULL)
    return 0;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int k=K-1;
    int count =0;
    int sumx=0;
    while (!q.empty())
    {
        Node* node = q.front();
        q.pop();
        if(node!=NULL){
            if(k==count)
            sumx+=node->data;
            if(node->left)
            q.push(node->left);
            if(node->right)
            q.push(node->right);
        }
        else if(!q.empty()){
            q.push(NULL);
            count++;
        }

    }
    return sumx;
}

int main(){

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int d = SumofLevel(root,3);
    cout<<d;
    return 0;
}