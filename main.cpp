#include <bits/stdc++.h>
using namespace std; 
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        if (n > m) {
            return findMedianSortedArrays(nums2, nums1);
        }
        int l = 0, r = n;
        int k = (n + m + 1) / 2;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (nums1[mid] < nums2[k - mid - 1]) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        int a = max(l > 0 ? nums1[l - 1] : INT_MIN, k - l > 0 ? nums2[k - l - 1] : INT_MIN);
        if ((n + m) % 2 == 1) {
            return a;
        }
        int b = min(l < n ? nums1[l] : INT_MAX, k - l < m ? nums2[k - l] : INT_MAX);
        return (a + b) / 2.0;


        
    }
};

int main()
{
    Solution s;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    cout << s.findMedianSortedArrays(nums1, nums2) << endl;
    
    return 0;
}