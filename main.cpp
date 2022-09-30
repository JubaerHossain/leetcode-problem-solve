#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {

        int n = nums.size();
        int l = 0, r = n - 1;
        while (l < r) {
            int mid = (l + r ) / 2;
            if (nums[mid] == nums[r]) {
                r = mid - 1;
            }else if (nums[mid] < nums[r]) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return nums[l];

        
    }

    int findMinSTL(vector<int>& nums) {
        return *min_element(nums.begin(), nums.end());
    }
};

int main()
{

    vector<int> nums = {1,3,3};
    Solution s;
    cout << s.findMin(nums) << endl;

    cout << s.findMinSTL(nums) << endl;



    return 0;
}