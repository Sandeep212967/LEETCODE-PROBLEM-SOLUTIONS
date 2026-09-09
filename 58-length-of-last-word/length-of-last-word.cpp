class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        
        int n = s.length();
        int count = 0;

        for (int i=0;i<n;i++){ 
         char ch=s[i];

            if (ch == ' ' && count > 0)
                break;

            if (ch != ' ')
                count++;
        }
        return count;
    }
};