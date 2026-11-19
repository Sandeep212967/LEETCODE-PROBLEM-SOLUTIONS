class Solution {
public:
    int minimizeSum(vector<int>& nums) {
             int n = nums.size();

        if (n <= 3) return 0;

        sort(nums.begin(), nums.end());

        int ans = INT_MAX;

       for (int i = 0; i <= 2; i++) {
    ans = min(ans, nums[n - 3 + i] - nums[i]);
}
        

        return ans;
    }
};