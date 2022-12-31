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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> result;
        if(root==NULL)
        {
            return result;
        }
        while(!q.empty())
        {
            int x=q.size();
            vector<int> v1;

      




            while(x>0){
            TreeNode* temp=q.front();
            q.pop();
            if(temp->left!=NULL)
            {
                q.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                q.push(temp->right);
            }
            x--;
             v1.push_back(temp->val);
            }
            result.push_back(v1);




        }
        return result;
        
    }
};