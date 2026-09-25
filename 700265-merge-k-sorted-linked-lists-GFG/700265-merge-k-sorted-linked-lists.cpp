/* Linked List Node Structure
class Node {
  public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    class Compare{
        public :
        bool operator()(Node *a,Node *b){
            return a->data > b->data;
        }
    };
    
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        // Min heap
        priority_queue<Node *,vector<Node *>,Compare>p(arr.begin(),arr.end());
        
        Node *root = new Node(0);
        Node *tail = root;
        
        Node *temp;
        while(!p.empty()){
            temp = p.top();
            p.pop();
            
            tail->next = temp;
            tail = tail->next;
            
            if(temp->next){
                p.push(temp->next);
            }
        }
        
        return root->next;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna