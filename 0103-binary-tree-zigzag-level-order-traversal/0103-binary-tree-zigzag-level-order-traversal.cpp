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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        int f=0;
        vector<vector<int>>v;
        if(root==NULL) return v;
        int s=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int>v1;
            s=q.size();
            while(s>0){
                TreeNode* temp=q.front();
                q.pop();
                v1.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                --s;
            }if(f==1)
                    reverse(v1.begin(),v1.end());
            f=!f;
            v.push_back(v1);
        }
        return v;
    }
};