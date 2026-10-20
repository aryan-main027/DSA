class Solution {
public:
    string toggleCase(string &s) {
        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 32;  
            } 
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32; 
            }
        }

        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna