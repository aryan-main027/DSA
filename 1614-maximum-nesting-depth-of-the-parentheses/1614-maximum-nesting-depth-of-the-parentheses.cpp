class Solution {
public:
    int maxDepth(string s) {
        int depth=0,maxDepth=0;

        for(char c:s){
            if(c == '('){
                depth++;
            }else if (c == ')'){
                depth--;
            }else{
                continue;
            }
            maxDepth=max(maxDepth,depth);
        }


        return maxDepth;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna