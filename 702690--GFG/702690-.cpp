class Solution {
  public:
    int getCount(vector<int> &arr, int x, int y) {
        // code here
        int pos_x = -1 , pos_y = -1;
        
        for(int i = 0 ; i<arr.size() ; i++){
            if(arr[i] == x){
                pos_x = i;
                break;
            }
        }
        
        for(int i = 0 ; i<arr.size() ; i++){
            if(arr[i] == y){
                pos_y = i;
            }
        }
        
        if(pos_x == -1 || pos_y == -1) return -1;
        
        int count = 0;
        pos_x += 1;
        while(pos_x < pos_y){
            count++;
            pos_x++;
        }
        
        return count;
    }
};

/*
class Solution {
  public:
    int getCount(vector<int> &arr, int num1, int num2) {
        // Your code goes here.

        int num1_index , num2_index;

        for(int i = 0 ; i<arr.size() ; i++){
            if(arr[i] == num1){
                num1_index = i;
                break;
            }
        }

        for(int i = arr.size()-1 ; i>=0 ; i--){
            if(arr[i] == num2){
                num2_index = i;
                break;
            }
        }

        if(num1_index < num2_index)
            return num2_index-num1_index-1;

        return 0;
    }
};
*/

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna