#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while (low <= high)
        {
            cout << low << " " << high << endl;
            int mid = (low + high) / 2;
            cout << "mid" << mid << endl;
            if (nums[mid] == target)
            {
                int left = mid, right = mid;
                cout << "left" << left << " and " << "right" << right << endl;
                while (left > 0 && nums[left - 1] == target)
                    left--;
                while (right < nums.size() - 1 && nums[right + 1] == target)
                    right++;
                return {left, right};
            }
            if (nums[mid] < nums[high])
            {
                if (nums[mid] < target && target <= nums[high])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
            else
            {
                if (nums[low] <= target && target < nums[mid])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
        }
        return {-1, -1};        
        
    }
};

int main()
{
    Solution s;
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    vector<int> res = s.searchRange(nums, target);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    
    return 0;
}