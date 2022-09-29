#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
        }
        
        
    }
};

int main()
{

    
    return 0;
}