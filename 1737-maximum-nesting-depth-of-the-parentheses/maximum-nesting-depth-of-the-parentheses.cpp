class Solution {
public:
    int maxDepth(string s) {
      int ans=0;
      int i=0;
     for (char c : s )
      {
        if(c=='('){
        i++;
        ans =max(ans,i);
        }
        else if(c == ')'){
        i--;
      }
    }
    return ans;
    }
};