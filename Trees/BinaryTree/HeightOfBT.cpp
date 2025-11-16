#include<iostream>
#include<queue>
#include<algorithm>
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

int hobt(TreeNode* root){
    if(root==nullptr){return 0;}
    int lh = hobt(root->left);
    int rh = hobt(root->right);
    return max(lh,rh)+1;
    
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
    root->right->right->right = new TreeNode(8);
    int maxh = hobt(root);
    cout<<maxh;
     return 0;
}