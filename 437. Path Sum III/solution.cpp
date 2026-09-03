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

    int helper(long long currsum,TreeNode* root, int targetSum,unordered_map<long long ,int>&map){
        if(root==NULL){
            return 0;
        }
        currsum+=root->val;
        int  path=0;
        if(map.find(currsum-targetSum)!=map.end()){
            path=map[currsum-targetSum];
        }

        map[currsum]++;

        path+=helper(currsum,root->left,targetSum,map);
        path+=helper(currsum,root->right,targetSum,map);
         map[currsum]--;
        return path;
    }

    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long ,int>map;
        map[0]=1;
      return helper(0,root,targetSum,map);


        
    }
};