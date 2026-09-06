class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
           int n=nums.size();
    int low=0;
    int high=n-1;
    int first=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid] == target){
            first=mid;
            high=mid-1;
        }
        else if(nums[mid] < target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
     int l=0;
    int h=n-1;
    int end=-1;
     while(l<=h){
        int m=l+(h-l)/2;
        if(nums[m] == target){
            end=m;
            l=m+1;
        }
        else if(nums[m] < target){
            l=m+1;
        }
        else{
            h=m-1;
        }
    }
    return {first,end};
    }
};