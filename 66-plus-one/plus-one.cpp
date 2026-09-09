class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int m=1;
        for(int i=n-1;i>=0;i--){
           int s=digits[i]+m;
           digits[i]=s%10;
           m=s/10;
           if(m==0)
           break;
        }  
    if(m)
    digits.insert(digits.begin(),m);
    return digits;
    }
};