class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         unordered_set<int> st(nums1.begin(), nums1.end());

        vector<int> ans;

        for (int num : nums2) {
            if (st.find(num) != st.end()) {
                ans.push_back(num);
                st.erase(num);  // Avoid duplicates
            }
        }

        return ans;
    }
};