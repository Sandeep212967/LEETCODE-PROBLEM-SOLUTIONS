class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n =nums.size();
        int i;
        int total=0;
        for(i= 0 ;i <n ;i++){
            if(n % (i+1)== 0){
            total =total + nums[i]*nums[i] ;
            }
        }
        return total;
    }
};