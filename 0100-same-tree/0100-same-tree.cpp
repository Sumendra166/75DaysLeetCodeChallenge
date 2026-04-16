#include <queue>

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> qu;
        qu.push(p);
        qu.push(q);

        while (!qu.empty()) {
            TreeNode* n1 = qu.front(); qu.pop();
            TreeNode* n2 = qu.front(); qu.pop();

            if (!n1 && !n2) continue;
            if (!n1 || !n2) return false;
            if (n1->val != n2->val) return false;

            qu.push(n1->left);
            qu.push(n2->left);
            qu.push(n1->right);
            qu.push(n2->right);
        }
        return true;
    }
};