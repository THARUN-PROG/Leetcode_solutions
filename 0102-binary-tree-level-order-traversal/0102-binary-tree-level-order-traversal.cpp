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
    typedef struct TreeNode node;
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root==NULL) return v;
        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>v1;
            int cnt=q.size();
            while(cnt!=0)
            {
                node*temp=q.front();
                v1.push_back(temp->val);
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                --cnt;
            }
            v.push_back(v1);
        }
            return v;
            
        
}};