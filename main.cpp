#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int n = nums.size();
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return l;
    }
};

int main()
{
    Solution s;

    vector<int> nums = {1, 3, 5, 6};

    cout << s.searchInsert(nums, 5) << endl;

    return 0;
}