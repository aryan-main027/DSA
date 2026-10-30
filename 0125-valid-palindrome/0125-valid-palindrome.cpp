class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
  
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                ans += tolower(s[i]);
            }
        }

        int i = 0 , j = ans.size() - 1;

        while(i<=j){
            if(ans[i] != ans[j]){
                return 0;
            }

            i++,j--;
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna