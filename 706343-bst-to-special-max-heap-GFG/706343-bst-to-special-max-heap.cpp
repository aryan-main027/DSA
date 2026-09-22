/* Binary Tree Node Structure
class Node {
    public:
        int data;
        Node* left;
        Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    void inorder(Node *root,vector<int>&ans){
        if(!root)
        return;
        
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    
    void postOrder(Node * root,int & index,vector<int>&ans){
        
        if(!root)
        return;
        
        postOrder(root->left,index,ans);
        postOrder(root->right,index,ans);
        root->data = ans[index++];
    }
    void convertToMaxHeap(Node* root) {
        // code here
        // Inorder Traversal
        vector<int>ans;
        inorder(root,ans);
        // Post Order Traversal
        int index = 0;
        postOrder(root,index,ans);
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna