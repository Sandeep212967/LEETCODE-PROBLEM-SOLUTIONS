class Solution {
public:
    double myPow(double x, int n) {
        long long pow = n;
       if(pow < 0){
       x = 1/x;
       pow= -pow;
       }    
         double ans = 1;  
       while(pow > 0 ){
        if(pow % 2 == 1){
            ans = ans * x;
        }
        x = x * x ;
        pow = pow / 2 ;
       }
       return ans; 
    }
};