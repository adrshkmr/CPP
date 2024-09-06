#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *left;
    Node *right;

    Node(int n){
        this->data = n;
        this->left = nullptr;
        this->right = nullptr;
    }
};


Node *fn(Node *root){
    int n;
    cin >> n;
    root = new Node(n);
    if(n == -1) return nullptr;
    root->left = fn(root->left);
    root->right = fn(root->right);
    return root;
}



int main(){
    Node *root = NULL;
    root = fn(root);
}