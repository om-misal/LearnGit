#include<bits/stdc++.h>
using namespace std;

struct node
{
    
        int data;
        node* left;
        node* right;
};

Node* newNode(int data)
{
    node * temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void printInorder(node* node)
{
    if(node==NULL)
        return ;
    //First traverse left part of tree
    printInorder(node->left);
    //then print data
    cout<<node->data<<" ";

    //now,lastly traverse right part of tree
    printInorder(node->right);
}

void printPreorder(node* node)
{
    if(node==NULL)
        return ;
    //then print data
    cout<<node->data<<" ";
    //First traverse left part of tree
    printPreorder(node->left);
    

    //now,lastly traverse right part of tree
    printPreorder(node->right);
}

void printPostorder(node* node)
{
    if(node==NULL)
        return ;
    
    //First traverse left part of tree
    printPostorder(node->left);
    

    //now,lastly traverse right part of tree
    printPostorder(node->right);

    //then print data
    cout<<node->data<<" ";
}

int main()
{
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->right->right = newNode(5);

    cout<<"Inorder Traversal of Tree :"<<endl;
    printInorder(root);
    return 0;
}