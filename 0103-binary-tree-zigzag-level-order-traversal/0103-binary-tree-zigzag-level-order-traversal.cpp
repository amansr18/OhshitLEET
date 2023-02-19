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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == nullptr) return {};
        
        vector<vector<int>> ans;
        queue<TreeNode*> q{{root}};
        bool isLeftToRight = true;
        
        while(!q.empty()){
            int n = q.size();
            vector<int> currlevel(n);
            
            for(int i=0;i<n;i++){
                TreeNode* temp = q.front();
                q.pop();
                if(isLeftToRight){
                    currlevel[i]=temp->val;
                }
                else currlevel[n-i-1]=temp->val;
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                
            }
            ans.push_back(currlevel);
            isLeftToRight = !isLeftToRight;
        }
        return ans;
    }
};