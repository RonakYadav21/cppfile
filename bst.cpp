#include<iostream>
using namespace std;

class TreeNode{
    public:
     int val;
     TreeNode* right;
     TreeNode* left;
    
    TreeNode(int v){
        this->val=v;
       this-> right=NULL;
        left=NULL;
    }

    ~TreeNode(){
        // this->right=NULL;
        // this->left=NULL;
        delete this->right;
        delete this->left;
    }
};

TreeNode* insert(TreeNode* root,int k){
    //base case
    if(!root)
    return new TreeNode(k);     /*call constructor*/

    //checking and linking
    if(k<root->val)
    root->left=insert(root->left,k);
    if(k>root->val)
    root->right=insert(root->right,k);
    return root;

}
void preorder_display(TreeNode* root){
    //base case
    if(!root)return;

    //recurssion
    cout<<root->val<<" ";
    preorder_display(root->left);
    preorder_display(root->right);
}

int main (){
     TreeNode*root=NULL;
    root=insert(root,11);
    root=insert(root,5);
    root=insert(root,3);
    root=insert(root,6);
    preorder_display(root);
return 0;
}
