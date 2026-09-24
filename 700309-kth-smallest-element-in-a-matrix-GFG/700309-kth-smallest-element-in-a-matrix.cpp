class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        // code here
        vector<pair<int,pair<int,int>>> temp;

        for(int i = 0; i < mat.size(); i++) {
            temp.push_back(make_pair(mat[i][0], make_pair(i, 0)));
        }

        // Create Min Heap
        priority_queue<
            pair<int,pair<int,int>>,
            vector<pair<int,pair<int,int>>>,
            greater<pair<int,pair<int,int>>>
        > pq(temp.begin(), temp.end());

        // data(value), row, col
        int ans;
        pair<int,pair<int,int>> Element;
        int i, j;

        while(k--) {
            Element = pq.top();
            pq.pop();  // missing

            ans = Element.first;
            i = Element.second.first;
            j = Element.second.second;

            if(j + 1 < mat[0].size())
                pq.push(make_pair(mat[i][j + 1], make_pair(i, j + 1)));
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna