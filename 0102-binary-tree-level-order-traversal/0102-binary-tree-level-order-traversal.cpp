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
        if(root==NULL) return {};
        
        queue<TreeNode*> nodes;
        vector<vector<int>> traversal;
        int len;
        nodes.push(root);
        while(!nodes.empty()){
            len = nodes.size();
            TreeNode* temp;
            vector<int> current_level;
            for(int i=0;i<len;i++){
                temp = nodes.front();
                nodes.pop();
                current_level.push_back(temp->val);
                if(temp->left) nodes.push(temp->left);
                if(temp->right) nodes.push(temp->right);
            }
            traversal.push_back(current_level);
        }
        return traversal;
    }
};