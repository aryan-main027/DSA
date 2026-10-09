class Solution {
  public:
    bool checkPangram(string& s) {
        //  code here
        vector<int>ans(26,0);
        
        for(char c : s){
            if(isupper(c)){
                ans[c-'A']++;
            }
            if(islower(c)){
                ans[c - 'a']++;
            }
        }
        
        for(int i = 0 ; i<ans.size() ; i++){
            if(ans[i] < 1)
            return false;
        }
        
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna