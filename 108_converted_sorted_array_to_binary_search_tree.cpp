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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        //empty
        if (nums.size()==0)
            return NULL;
        
        //no subtree
        if (nums.size()==1)
            return new TreeNode(nums[0]);
        
        //int val
        int mid = nums.size()/2;
        TreeNode *node = new TreeNode(nums[mid]);
        
        //TreeNode *left
        const vector<int>::iterator l_first = nums.begin();
        const vector<int>::iterator l_last = nums.begin() + mid;
        vector<int> v(l_first, l_last);
        node->left = sortedArrayToBST(v);
        
        //TreeNode *right
        if (mid==nums.size()-1)
        {
            node->right = NULL;
        }
        else
        {
            const vector<int>::iterator r_first = nums.begin() + mid + 1;
            const vector<int>::iterator r_last = nums.end();
            vector<int> v(r_first, r_last);
            node->right = sortedArrayToBST(v);
        }
        return node;  
    }
};