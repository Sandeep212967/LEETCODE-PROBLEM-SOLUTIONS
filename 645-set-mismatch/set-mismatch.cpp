class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
      vector<int> k(n+1,0);
        for(int x : nums){
             k[x]++;
        }
        int duplicate = -1 ;
        int missing = -1;
    for(int i = 1 ; i<=n ;i++){
        if(k[i]==2)
        duplicate = i ; 
        else if(k[i]==0)
        missing = i;
    }
       return{duplicate , missing};
    }
};