class Solution {
public:
    int majorityElement(vector<int>& nums) {
            int k = 0;
        int count = 0;

        for (int num : nums) {
            if (count == 0) {
                k = num;
            }

            if (num == k) {
                count++;
            } else {
                count--;
            }
        }

        return k;   
    }
};