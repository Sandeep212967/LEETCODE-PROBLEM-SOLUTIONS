class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
            int n = nums.size();
             for (int i = 0; i < n; i += 2) {
            if (nums[i] % 2 != 0) {
                for (int j = 1; j < n; j += 2) {
                    if (nums[j] % 2 == 0) {
                        swap(nums[i], nums[j]);
                        break;
                    }
                }
            }
        }

        return nums;
    }
};