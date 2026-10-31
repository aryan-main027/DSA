class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";

        int index=-1;
        int i=0;
        while(i<num.size()){
            int x=num[i]-'0';
            if(x%2 != 0)
                index = i;
            i++;
        }

        if(index == -1)return "";
        ans = num.substr(0,index+1);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna