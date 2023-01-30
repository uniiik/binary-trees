/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void solve(vector<int> & ans,TreeNode* root)
    {
        if(root==NULL)
            return ;
        if(root->left==NULL && root->right==NULL)
            ans.push_back(root->val);
        
        solve(ans,root->left);
        solve(ans,root->right);
        
    }
    
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> result1,result2;
        solve(result1,root1);
        solve(result2,root2);
        
        return result1==result2;
        
    }
};