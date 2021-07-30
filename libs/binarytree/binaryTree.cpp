#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
};
int main(){
    Node * root = new Node;
    root->data = 1;
    root->left = new Node;
    root->right = new Node;
    root->left->data = 2;
    root->right->data = 3;
    root->left->left->data = 4;
    root->left->left->left = NULL;
    root->left->left->right = NULL;

    root->right->left = new Node;
    root->right->left->data = 5;
    root->right->left->right = NULL;
    root->right->right = new Node;
    root->right->right->data = 6;
    root->right->right->left = NULL;
    root->right->right->right = NULL;
    root->right->left->left = new Node;
    root->right->left->left->data = 7;
    root->right->left->left->left = NULL;
    root->right->left->left->right = NULL;


    cout<<root->data;

}