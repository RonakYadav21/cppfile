#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
     int val;
     TreeNode* right;
     TreeNode* left;
    
    TreeNode(int v){
        this->val=v;
        this->right=NULL;
        this->left=NULL;
    }

    ~TreeNode(){
        this->right=NULL;
        this->left=NULL;
        delete this->right;
        delete this->left;
    }
};

TreeNode* insert(TreeNode* root,int k){
    //base case
    if(!root)return new TreeNode(k);

    //checking and linking
    if(k<root->val)root->left=insert(root->left,k);
    if(k>root->val)root->right=insert(root->right,k);
    return root;
}

void preorder_display(TreeNode* root){
    //base case
    if(!root)return;

    //recurssion
    preorder_display(root->left);
    cout<<root->val<<" ";
    preorder_display(root->right);
}

void inorder_display(TreeNode* root){
    if(!root)return;
    inorder_display(root->left);
    cout<<root->val<<" ";
    inorder_display(root->right);
}

void postorder_display(TreeNode* root){
    if(!root)return ;

    //using queue 
    queue<TreeNode*>q;
    q.push(root);
    while(q.size()){
        TreeNode* temp=q.front();
        //pop the parent
        q.pop();

        //push the child
        if(temp->left)q.push(temp->left);
        if(temp->right)q.push(temp->right);

        //display 
        cout<<temp->val<<" ";
    }
}

TreeNode* deleteNode(TreeNode* root, int k)
{
    // Base case
    if (!root)
        return root;
 
    // Recursive calls for ancestors of
    // node to be deleted
    if (root->val > k) {
        root->left = deleteNode(root->left, k);
        return root;
    }
    else if (root->val < k) {
        root->right = deleteNode(root->right, k);
        return root;
    }
 
    // We reach here when root is the node
    // to be deleted.
 
    // If one of the children is empty
    if (!root->left) {
        TreeNode* temp = root->right;
        delete root;
        return temp;
    }
    else if (!root->right) {
        TreeNode* temp = root->left;
        delete root;
        return temp;
    }
 
    // If both children exist
    else {
 
        TreeNode* succParent = root;
 
        // Find successor
        TreeNode* succ = root->right;
        while (succ->left != NULL) {
            succParent = succ;
            succ = succ->left;
        }
 
        // Delete successor.  Since successor
        // is always left child of its parent
        // we can safely make successor's right
        // right child as left of its parent.
        // If there is no succ, then assign
        // succ->right to succParent->right
        if (succParent != root)
            succParent->left = succ->right;
        else
            succParent->right = succ->right;
 
        // Copy Successor Data to root
        root->val = succ->val;
 
        // Delete Successor and return root
        delete succ;
        return root;
    }
}

int main(){
    

}
