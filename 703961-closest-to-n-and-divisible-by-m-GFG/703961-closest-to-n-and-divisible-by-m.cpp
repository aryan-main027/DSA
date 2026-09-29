class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
        
        if(n%m == 0) return n;
        
        int num1 = 0 , num2 = 0;
        int x = n , y = n;
        while(n > 0){
            num1 = x-1;
            num2 = y+1;
            
            x = num1;
            y = num2;
            
            if(num1%m == 0 && num2%m != 0)
            return num1;
            if(num2%m == 0 && num1%m != 0)
            return num2;
            
            if(num1%m == 0 && num2%m == 0)
            return max(num1,num2);
        }
        
        while(n < 0){
            num1 = x+1;
            num2 = y-1;
            
            x = num1;
            y = num2;
            
            if(num1%m == 0 && num2%m != 0)
            return num1;
            if(num2%m == 0 && num1%m != 0)
            return num2;
            
            if(num1%m == 0 && num2%m == 0)
            return (-1)*max(abs(num1),abs(num2));
        }
        
        return n;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna