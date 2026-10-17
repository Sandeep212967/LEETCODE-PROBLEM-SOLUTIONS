class Solution {
public:
    bool isPerfectSquare(int num) {
        long long left=0;
        long long high=num;
        while(left<=high){
            long long mid =(left+high)/2;
            long long square=mid*mid;
            if(square==num){
                return true;
            }
            else if(square<num){
            left=mid+1;
        }
            else{
            high=mid-1;
            }
        }
        return false;
    }
};