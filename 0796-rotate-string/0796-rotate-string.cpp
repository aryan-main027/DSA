class Solution {
public:
    bool rotateString(string s, string goal) {

        if(s.size() != goal.size()) return false;
        

        vector<int>lps(goal.size(),0);
        int j=1;
        int len=0;
        while(j<goal.size()){
            if(goal[j] == goal[len]){
                len++;
                lps[j] = len;
                j++;
            }else if(len > 0){
                len = lps[len-1];
            }else{
                lps[j] = 0;
                j++;
            }
        }

        string text = s+s;
        int a=0,b=0;

        while(a<text.size()){
            if(text[a] == goal[b]){
                a++,b++;
            }else if(b > 0){
                b = lps[b-1];
            }else{
                a++;
            }
            if (b == goal.size()) return true;
        }

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna