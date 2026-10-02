class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n =nums.size();
        for(int i = 0 ; i<n ;i++){
              int sum=0;
            int x = nums[i];
            do{
            int d = x % 10;
            sum =sum+d;
            x=x/10;
            }
            while(x>0);
            if(i==sum)
            return i;
        }
        return -1;
    }
};