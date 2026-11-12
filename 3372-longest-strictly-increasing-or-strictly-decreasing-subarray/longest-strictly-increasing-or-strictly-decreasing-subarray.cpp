class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
           int inc = 1, dec = 1, ans = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1])
                inc++;
            else
                inc = 1;

            if (nums[i] < nums[i - 1])
                dec++;
            else
                dec = 1;

            ans = max(ans, max(inc, dec));
        }

        return ans;
    }
};