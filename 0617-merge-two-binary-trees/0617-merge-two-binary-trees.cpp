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
    void sum_nikhil(TreeNode* &root1, TreeNode* &root2)
    {
        if(root1==NULL || root2==NULL)
        {
            if(root1==NULL)
                root1=root2;
            
            return;
        }
        if(root1!=NULL && root2!=NULL)
        {
            root1->val+=root2->val;
        }
        sum_nikhil(root1->left,root2->left);
        sum_nikhil(root1->right,root2->right);
    }    
    //main function
    
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        sum_nikhil(root1,root2);
        return root1;
        
    }
};

/*
we will make anothe rfuncn sum_nikhil 
if one of the root1 and root2 is null then check if root1 is null or not , if null  then we will push value of root2 into root1 and if root1 is not null and root2 is null then we dont do anything because we willbe return root1 in last(means of root1 and root2 into root1)

after this finally call left and right tree recursively

*/