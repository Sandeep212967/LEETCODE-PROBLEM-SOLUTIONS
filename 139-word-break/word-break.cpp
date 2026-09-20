class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {

        unordered_set<string> m (wordDict.begin(), wordDict.end());

        int n = s.size();
        vector<bool> k(n + 1, false);

        k[0] = true;

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {

                if (k[j] && m.count(s.substr(j, i - j))) {
                    k[i] = true;
                    break;
                }
            }
        }

        return k[n];
    }
};