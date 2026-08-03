class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        string ans = to_string(x);

        int start = 0,end = ans.size()-1;
        while(start <= end){
            if(ans[start] == ans[end]){
                start++;
                end--;
            }else{
                return false;
            }
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna