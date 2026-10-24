class Solution {
public:
    int num(char s){
        if(s == 'I') return 1;
        else if (s == 'V') return 5;
        else if (s == 'X') return 10;
        else if (s == 'L') return 50;
        else if (s == 'C') return 100;
        else if (s == 'D') return 500;
        else if (s == 'M') return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int sum = 0 , index = 0 ;
        while(index<s.size()){
            if(num(s[index]) < num(s[index+1])){
                sum -= num(s[index]);
                index++;
            }else{
                sum += num(s[index]);
                index++;
            }
        }

        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna