class Solution {
public:

    void sequence(int n , int l , int r , vector<string>& ans , string & temp){

        if(l+r == 2*n) {
            ans.push_back(temp);
            return;
        }

        // Left 

        if(l < n ){
            temp.push_back('(');
            sequence(n,l+1,r,ans,temp);
            temp.pop_back();
        }

        // Right

        if(r < l){
            temp.push_back(')');
            sequence(n,l,r+1,ans,temp);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp;

        sequence(n,0,0,ans,temp);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna