class Solution {
public:
    int mySqrt(int x) {

        if (x < 2)
            return x;

        long long guess = x;

        while (guess * guess > x) {
            int a =  x / guess;
            guess = (guess + a) / 2;   // formula : guess=(guess+(x/guess)/2
        }

        return guess;
    }
};