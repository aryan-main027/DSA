class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0;

        vector<bool>char_(256,0);

        int first = 0 , second = 0;

        while(second < s.size()){

            while(char_[s[second]]){
                char_[s[first]] = false;
                first++;
            }

            

            char_[s[second]] = 1;
            len = max(second-first+1,len);
            second++;
        }

        return len;

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna