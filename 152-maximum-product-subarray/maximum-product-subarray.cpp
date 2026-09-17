class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxpro = nums[0];
        int minpro=nums[0];
        int ans=nums[0];
        for(int i=1 ; i < n ; i++){
            int current = nums[i];
            int oldmax=maxpro;
            int oldmin=minpro;
            maxpro=max({current,oldmax*current ,oldmin*current});
            minpro=min({current,oldmax*current ,oldmin*current});

            ans =max(ans,maxpro);
        }
        return ans ;
    }
};