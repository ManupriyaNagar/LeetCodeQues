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
    int findBottomLeftValue(TreeNode* root) {
        if(root==nullptr)
           return -1;
        queue<TreeNode*>q;
        q.push(root);
        // TreeNode* BottomLeft=nullptr;
        int BottomLeft =0;
        while(!q.empty()){
            BottomLeft=q.front()->val;
        
            for(int i =q.size();i>0;i--){
                TreeNode* currentvalue= q.front();
                q.pop();
                if(currentvalue->left)
                  q.push(currentvalue->left);
                if(currentvalue->right)
                  q.push(currentvalue->right);

            }
        }
        return BottomLeft;

    
        // int nextnode= arr[i+1];
        
        
    }
};