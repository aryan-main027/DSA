// class Solution {
//   public:
    
//     int row[4] = {-1,1,0,0};
//     int col[4] = {0,0,-1,1};
//     int r;
//     int c;
//     bool valid(int i,int j){
//         return i>=0&&i<r&&j>=0&&j<c;
//     }
//     int orangesRot(vector<vector<int>>& mat) {
//         // code here
//         r = mat.size();
//         c = mat[0].size();
//         queue<pair<int,int>>q;
//         for(int i=0;i<r;i++)
//             for(int j=0;j<c;j++)
//                 if(mat[i][j] == 2)
//                     q.push(make_pair(i,j));
                    
        
//         int timer = 0;
//         while(!q.empty()){
//             timer++;
//             int curr_ = q.size();
            
//             while(curr_--){
//                 int i = q.front().first;
//                 int j = q.front().second;
                
//                 q.pop();
                
//                 for(int k=0;k<4;k++){
//                     if(valid(i+row[k],j+col[k])&&mat[i+row[k]][j+col[k]] == 1){
//                         mat[i+row[k]][j+col[k]] = 2;
//                         q.push(make_pair(i+row[k],j+col[k]));
//                     }
//                 }
                
                
//                 // // up
//                 // if(mat[i-1][j] == 1){
                    
//                 // }
//                 // // down
//                 // if(mat[i+1][j] == 1){
                    
//                 // }
//                 // // left
//                 // if(mat[i][j-1] == 1){
                    
//                 // }
//                 // // right
//                 // if(mat[i][j+1] == 1){
                    
//                 // }
//             }
            
//         }
        
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 if(mat[i][j]==1)
//                 return -1;
//             }
//         }
        
//         return timer-1;
//     }
// };

class Solution {
  public:

    int row[4] = {-1,1,0,0};
    int col[4] = {0,0,-1,1};
    int r;
    int c;

    bool valid(int i,int j){
        return i>=0&&i<r&&j>=0&&j<c;
    }

    int orangesRot(vector<vector<int>>& mat) {
        // code here
        r = mat.size();
        c = mat[0].size();

        queue<pair<int,int>>q;
        int fresh = 0;

        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++){
                if(mat[i][j] == 2)
                    q.push(make_pair(i,j));
                else if(mat[i][j] == 1)
                    fresh++;
            }

        if(fresh == 0) return 0;

        int timer = 0;

        while(!q.empty()){
            timer++;
            int curr_ = q.size();

            while(curr_--){
                int i = q.front().first;
                int j = q.front().second;

                q.pop();

                for(int k=0;k<4;k++){
                    if(valid(i+row[k],j+col[k])&&mat[i+row[k]][j+col[k]] == 1){
                        mat[i+row[k]][j+col[k]] = 2;
                        fresh--;
                        q.push(make_pair(i+row[k],j+col[k]));
                    }
                }
            }
        }

        if(fresh > 0) return -1;

        return timer-1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna