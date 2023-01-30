/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
            return NULL;
        if(root->val==p->val || root->val==q->val)
            return root;
        
        
        TreeNode* left=lowestCommonAncestor(root->left,p,q);
        TreeNode* right=lowestCommonAncestor(root->right,p,q);
        
        /*
        means if we called recursively in left or right side then if we didnt get in left side then print right side and vice versa
        */
        if(left==NULL)
            return right;
        if(right==NULL)
            return left;
        
        return root;
        
        
    }
};