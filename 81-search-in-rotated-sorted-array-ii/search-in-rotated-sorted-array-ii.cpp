class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int i ,k=0;
        for(i=0;i<n;i++){
            nums[k]=nums[i];
            if(nums[k]==target){
                return true;
            }
        }
        return false;
    }
};