class Solution {
public:
    void helper(TreeNode* root, vector<int>& ans)//函式呼叫函式
    {
        if(root==nullptr)return;//終止條件
        helper(root->left,ans);//左半
        ans.push_back(root->val);//中間
        helper(root->right,ans);//右半
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        helper(root,ans);
        return ans;        
    }
};
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