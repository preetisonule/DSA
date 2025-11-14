#include<iostream>
#include<stack>
#include<vector>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

void IpreOrder(Node* root){
    stack<Node*> s;
    vector<int> v;
    s.push(root);
    while(!s.empty()){
        // cout<<s.top()<<" ";
        root = s.top();
        s.pop();
        v.push_back(root->data);
        if(root->right!=nullptr){
            s.push(root->right);
            cout<<s.top();
        }
        if(root->left!=nullptr){
            s.push(root->left);
        }
    }
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
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
    IpreOrder(root);
     return 0;
}