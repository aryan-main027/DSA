class Solution {
public:
    bool isPalindrome(int x) {
        // if(x < 0) return false;

        // string ans = to_string(x);

        // int start = 0,end = ans.size()-1;
        // while(start <= end){
        //     if(ans[start] == ans[end]){
        //         start++;
        //         end--;
        //     }else{
        //         return false;
        //     }
        // }

        // return true;

        if(x < 0) return false;
        int num = x;
        long long xcopy = 0;
        while(num){
            int digit = num%10;
            num = num/10;
            xcopy = xcopy*10 + digit;
        }
        
        return (int)xcopy == x;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna