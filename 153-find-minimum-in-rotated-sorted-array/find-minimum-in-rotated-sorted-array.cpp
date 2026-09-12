class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low=0;
        int n=nums.size();
        int high =n-1;
        while(low<high){
            int mid = low + (high-low)/2;
            if(nums[mid]>nums[high])
              low=mid+1; 
            else
                high =mid;
        }
        return nums[low];
    }
};