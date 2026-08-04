class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<int> mixed;

        int idx1 = 0, idx2 = 0;

        while (idx1 < n1 && idx2 < n2) {

            if (nums1[idx1] <= nums2[idx2]) {
                mixed.push_back(nums1[idx1]);
                idx1++;
            } else {
                mixed.push_back(nums2[idx2]);
                idx2++;
            }
            
        }

        while (idx1 < n1) {
            mixed.push_back(nums1[idx1]);
            idx1++;
        }

        while (idx2 < n2) {
            mixed.push_back(nums2[idx2]);
            idx2++;
        }

        int n = mixed.size();

        if (n % 2 == 1)
            return mixed[n / 2];

        return (mixed[n / 2 - 1] + mixed[n / 2]) / 2.0;
    }
};