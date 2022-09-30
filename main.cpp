#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int low = 1, high = *max_element(nums.begin(), nums.end());
        int ans = high;

        while (low < high)
        {
            int mid = (high + low) / 2;
            int sum = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                sum += (nums[i] / mid);
                
                if (nums[i] % mid == 0)
                {
                    sum += 1;
                }
            }
            if (sum <= threshold)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;
    cout << s.smallestDivisor(nums, threshold);

    return 0;
}