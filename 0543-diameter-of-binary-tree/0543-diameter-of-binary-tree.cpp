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
//     int res=0;
//     int height(TreeNode* root)
//     {
//         if(root==NULL)
//         {
//             return 0;
//         }
        
//         int lh=height(root->left);
//         int rh=height(root->right);
//         res=max(res,1+lh+rh);
        
//         return 1+max(lh,rh);
        
//     }
    
    
    
//     int diameterOfBinaryTree(TreeNode* root) {
    
    int height(TreeNode* root)
{
    if (root == NULL)
        return 0;
 
// If tree is not empty then height = 1+ max of left height and right height 
    return 1 + max(height(root->left), height(root->right));
}
    
    
 int diameterOfBinaryTree(TreeNode* root) {
    if (root == NULL)
        return 0;
 
    // get the height of left and right sub-trees
    int lheight = height(root->left);
    int rheight = height(root->right);
 
    // get the diameter of left and right sub-trees
    int ldiameter = diameterOfBinaryTree(root->left);
    int rdiameter = diameterOfBinaryTree(root->right);
 
    return max(lheight + rheight ,
               max(ldiameter, rdiameter));
}
        
    
};