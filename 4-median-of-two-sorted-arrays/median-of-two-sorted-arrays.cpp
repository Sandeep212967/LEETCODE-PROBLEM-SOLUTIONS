class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n =nums1.size();
        int m =nums2.size();
         if (nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2, nums1);

              int left = 0, right = n;

        while (left <= right) {
            
            int mid = left + (right - left) / 2;

           
            int mid2 = (m + n + 1) / 2 - mid;

            int left1  = (mid == 0) ? INT_MIN : nums1[mid - 1];
            int right1 = (mid== n) ? INT_MAX : nums1[mid];

            int left2  = (mid2 == 0) ? INT_MIN : nums2[mid2 - 1];
            int right2 = (mid2 == m) ? INT_MAX : nums2[mid2];

            if (left1 <= right2 && left2 <= right1) {
                if ((m + n) % 2 == 1) {
                    return max(left1, left2);
                }
                return (max(left1, left2) + min(right1, right2)) / 2.0;
            }
            if (left1 > right2) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        return 0.0;
    }
};