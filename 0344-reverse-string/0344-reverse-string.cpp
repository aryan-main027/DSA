class Solution {
public:
    void RevStr(int start,int end,vector<char>& s){
        if(start >= end) return;

        swap(s[start],s[end]);

        RevStr(start+1,end-1,s);
        
    }
    void reverseString(vector<char>& s) {
        // stack<char>s1;

        // for(int i = 0 ; i<s.size() ; i++){
        //     s1.push(s[i]);
        // }

        // int i = 0;
        // while(!s1.empty()){
        //     s[i++] = s1.top();
        //     s1.pop();
        // }

        RevStr(0,s.size()-1,s);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna