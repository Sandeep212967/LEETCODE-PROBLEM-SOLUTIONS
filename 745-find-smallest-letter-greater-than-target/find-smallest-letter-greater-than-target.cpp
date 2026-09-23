class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size() ;
        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (letters[mid] <= target)
                low = mid + 1;
            else
                high = mid - 1;
        }
         int x = letters[low % n ];
        return x;
    }
};