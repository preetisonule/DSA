#include<iostream>
#include<algorithm>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

int hOfTree(Node* root){
    if(root==nullptr){ return 0; }
    int leftH = hOfTree(root->left);
    int rightH = hOfTree(root->right);
    if(leftH == -1){return -1;}
    if(rightH == -1){return -1;}
    if((abs(rightH - leftH))>1){ return -1;}
    return max(leftH,rightH)+1;
}

bool isBalanced(Node* root){
    return hOfTree(root) != -1;
}

int main() 
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(8);
    root->right->right->right->right = new Node(9);
    cout<<isBalanced(root);
     return 0;
}