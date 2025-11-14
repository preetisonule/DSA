#include<iostream>
#include<queue>
#include<vector>
using namespace std;
struct TreeNode{
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
    TreeNode(int data1){
        data = data1;
        left = right = nullptr;
    }
};

void levelOrder(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        for(int i = 0; i<size;i++){
            TreeNode* node = q.front();
            cout<<node->data<<" ";
            q.pop();
            if(node->left!=nullptr){ q.push(node->left);}
            if(node->right!=nullptr){ q.push(node->right);}
        }
    }
}

int main() 
{
    struct TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    levelOrder(root);
     return 0;
}