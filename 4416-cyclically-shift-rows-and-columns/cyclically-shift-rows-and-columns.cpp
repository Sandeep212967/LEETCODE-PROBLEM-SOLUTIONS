class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
       vector<vector<int>> ans;
       ans.resize(n);

    for (int i = 0; i < n; i++) {
    ans[i].resize(n);
    }
        for(int i=0; i<n ; i++){
            for(int j=0;j<n ;j++){

            int c = (j - rowShift[i] + n) % n;

            int r =(i - colShift[c] + n) % n;

                ans[r][c] =grid[i][j];
            }
        }
        return ans;
    }
};