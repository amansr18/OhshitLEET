class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> vseq1 {};
        getLeafSequence(root1, vseq1);
        
        vector<int> vseq2 {};
        getLeafSequence(root2, vseq2);
        
        return vseq1 == vseq2;
    }
private:
    void getLeafSequence(TreeNode* root, vector<int>& vseq) {
        if (!root)
            return;
        if (!root->left && !root->right)
            vseq.push_back(root->val);
        else {
            if (root->left)
                getLeafSequence(root->left, vseq);
            if (root->right)
                getLeafSequence(root->right, vseq);
        }
    }
};