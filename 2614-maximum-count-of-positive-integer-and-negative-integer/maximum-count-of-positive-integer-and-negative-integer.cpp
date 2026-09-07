class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int count=0 , moves=0;
        for(int i = 0 ; i < n ; i++){
            int x=nums[i];
            if(x > 0){
                count++;
            }
            else if (x < 0){
                moves++;
            }       
        }
        if(count>moves){
            return count;
        }
        else{
            return moves;
        }
    }
};