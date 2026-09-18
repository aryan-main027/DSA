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

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna