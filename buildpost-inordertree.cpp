#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
            return i;
    }
    return -1;
}

Node *buildTree(int postorder[], int inorder[], int start, int end)
{
    static int idx = 4;
    if (start > end)
        return NULL;
    int curr = inorder[idx];
    idx--;
    Node *node = new Node(curr);
    if (start == end)
        return node;
    int pos = search(inorder, start, end, curr);
    node->right = buildTree(postorder, inorder, pos + 1, end);
    node->left = buildTree(postorder, inorder, start, pos - 1);
}
void preorderPrint(Node *root)
{
    if (root == NULL)
        return;

    preorderPrint(root->left);
    preorderPrint(root->right);
    cout << root->data << " ";
}

int main()
{
    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};
    preorderPrint(buildTree(postorder, inorder, 0, 4));
    return 0;
}