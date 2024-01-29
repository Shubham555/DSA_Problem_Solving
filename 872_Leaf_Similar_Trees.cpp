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

void inorder(TreeNode* root, vector<int> &v){
    // Base Case
    if(root==NULL){
        return;
    }

    inorder(root->left,v);
    if(root->left == NULL && root->right == NULL){
              v.push_back(root->val);
        }
    inorder(root->right,v);
}
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> vec_1;
        vector<int> vec_2;

        inorder(root1,vec_1);
        inorder(root2,vec_2);
        if(vec_1==vec_2){
            return true;
        }
            return false;
    }
};
