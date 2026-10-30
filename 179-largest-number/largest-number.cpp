class Solution {
public:
    string largestNumber(vector<int>& nums) {
          vector<string> arr;

        for (int num : nums) {
            arr.push_back(to_string(num));
        }

        sort(arr.begin(), arr.end(), [](string a, string b) {
            return a + b > b + a;
        });

        // Handle the case when all numbers are zero
        if (arr[0] == "0") return "0";

        string ans = "";

        for (string s : arr) {
            ans += s;
        }

        return ans;
    
    }
};