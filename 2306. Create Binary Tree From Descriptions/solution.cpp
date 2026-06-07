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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> Map;
        unordered_set<int> children;

        for (const auto& desc : descriptions) {
            int parentVal = desc[0];
            int childVal = desc[1];
            bool isLeft = desc[2];

            // Create parent node if it doesn't exist
            if (Map.find(parentVal) == Map.end()) {
                Map[parentVal] = new TreeNode(parentVal);
            }

            // Create child node if it doesn't exist
            if (Map.find(childVal) == Map.end()) {
                Map[childVal] = new TreeNode(childVal);
            }
        

        if (isLeft) {
                Map[parentVal]->left = Map[childVal];
            } else {
                Map[parentVal]->right = Map[childVal];
            }


            // Mark this node as a child
            children.insert(childVal);

        }

            // Find the root (the node that is never a child)
        for (const auto& desc : descriptions) {
            int parentVal = desc[0];
            if (children.find(parentVal) == children.end()) {
                return Map[parentVal];
            }
        }
        
        return nullptr;
    }
};