class Solution {
public:
    bool isAnagram(string s, string t) {
        
        // if(s.size() != t.size()) return false;
        
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());

        // if(s == t){
        //     return true;
        // }

        // return false;

        vector<int>ch(26,0);

        for(char c:s){
            ch[c-'a']++;
        }

        for(char c:t){
            ch[c-'a']--;
        }

        for(auto x:ch){
            if(x != 0) return false;
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna