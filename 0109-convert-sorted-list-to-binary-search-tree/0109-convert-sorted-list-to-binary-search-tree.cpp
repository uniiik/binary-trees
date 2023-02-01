/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        
        if(head==NULL) return NULL ;
        //if one value is present then it is only root
        if(head->next==NULL)
            return new TreeNode(head->val);
        
        
        //we will use slow anf fast pointer approach to find middle point
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* pre=head;
        
        while(fast!=NULL && fast->next!=NULL )
        {
            pre=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        //at this moment our slow is representing mid point
        
        
        pre->next=0;//break into previos link of sloww pointer, so that it would be divided into half
         TreeNode* root = new TreeNode(slow->val);
         root->left = sortedListToBST(head);
        root->right = sortedListToBST(slow->next);
        
        
        
        return root;
        
        
        
        
    }
};