class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        int n = x;
        long long pal = 0;

        while (x > 0) {
            int d=x % 10;
            pal = pal * 10 + d;
            x =x/10;
        }
        int m= (n == pal);
        return m;
    }
};