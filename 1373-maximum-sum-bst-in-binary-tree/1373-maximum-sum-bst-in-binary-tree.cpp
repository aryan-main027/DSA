class Box {
public:
    bool BST;
    int sum;
    int mn, mx;

    Box(int data) {
        BST = true;
        sum = data;
        mn = data;
        mx = data;
    }
};

class Solution {
public:
    Box* find(TreeNode* root, int& ans) {

        if (!root->left && !root->right) {
            ans = max(ans, root->val);
            return new Box(root->val);
        }

        else if (!root->left && root->right) {

            Box* rightHead = find(root->right, ans);

            if (rightHead->BST && root->val < rightHead->mn) {

                rightHead->sum += root->val;
                rightHead->mn = root->val;

                ans = max(ans, rightHead->sum);
                return rightHead;
            }

            rightHead->BST = false;
            return rightHead;
        }

        else if (root->left && !root->right) {

            Box* leftHead = find(root->left, ans);

            if (leftHead->BST && root->val > leftHead->mx) {

                leftHead->sum += root->val;
                leftHead->mx = root->val;

                ans = max(ans, leftHead->sum);
                return leftHead;
            }

            leftHead->BST = false;
            return leftHead;
        }

        else {

            Box* leftHead = find(root->left, ans);
            Box* rightHead = find(root->right, ans);

            if (leftHead->BST && rightHead->BST &&
                leftHead->mx < root->val &&
                rightHead->mn > root->val) {

                Box* head = new Box(root->val);

                head->sum = leftHead->sum + rightHead->sum + root->val;
                head->mn = leftHead->mn;
                head->mx = rightHead->mx;

                ans = max(ans, head->sum);

                return head;
            }

            leftHead->BST = false;
            return leftHead;
        }
    }

    int maxSumBST(TreeNode* root) {

        if (!root)
            return 0;

        int ans = 0;

        find(root, ans);

        return ans;
    }
};