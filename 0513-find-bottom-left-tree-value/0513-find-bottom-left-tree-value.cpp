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
    int findBottomLeftValue(TreeNode* root) {
        int result=0;
        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL)
            return 0;
        
        while(!q.empty())
        {
            TreeNode* temp =q.front();
            result=temp->val;
            if(temp->right!=NULL)
                q.push(temp->right);
            if(temp->left!=NULL)
                q.push(temp->left);
            q.pop();
            
            
        }
        return result;
        
    }
};