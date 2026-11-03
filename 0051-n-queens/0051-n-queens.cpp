class Solution {
public:
    
    void find(int row,int n,vector<vector<string>>& ans,vector<string>& Board,vector<bool>& column,vector<bool>& LeftDiag,vector<bool>& RightDiag){

        // Base Condition
        if(row == n){
            ans.push_back(Board);
            return;
        }


        // Left Diag : (n-1)+col-row
        // Right Diag : row+col


        for(int j=0;j<n;j++){

            if(column[j]==0&&LeftDiag[n-1+j-row]==0&&RightDiag[row+j]==0){
                column[j] = 1;
                Board[row][j] = 'Q';
                LeftDiag[n-1+j-row] = 1;
                RightDiag[row+j] = 1;
                find(row+1,n,ans,Board,column,LeftDiag,RightDiag);
                column[j] = 0; 
                Board[row][j] = '.';
                LeftDiag[n-1+j-row] = 0;
                RightDiag[row+j] = 0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>Board(n);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                Board[i].push_back('.');
            }
        }

        vector<bool>LeftDiag(2*n-1,0);
        vector<bool>RightDiag(2*n-1,0);
        vector<bool>column(n,0);

        find(0,n,ans,Board,column,LeftDiag,RightDiag);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna