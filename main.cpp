#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {

        int l = 0, r = nums.size() - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (nums[mid] == target)
                return mid;
            if (nums[mid] < nums[r])
            {
                if (nums[mid] < target && target <= nums[r])
                    l = mid + 1;
                else
                    r = mid - 1;
            }
            else
            {
                if (nums[l] <= target && target < nums[mid])
                    r = mid - 1;
                else
                    l = mid + 1;
            }
        }
        return -1;
    }
    int search2(vector <int> & nums, int target){
        int low = 0, high = nums.size() - 1;

        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] == target ) return mid;
            if(nums[mid] < nums[high]){
                if(nums[mid] < target && target <= nums[high]){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }else{
                if(nums[low] <= target && target < nums[mid]){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }
        }
    }
    int search3(vector <int> & nums, int target){
        int low = 0, high = nums.size() - 1;
        sort(nums.begin(), nums.end());

      return  binary_search(nums.begin(), nums.end(), target);
    }
};

int main()
{

    Solution s;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout << s.search(nums, target) << endl;


    cout <<"using stl : " << endl;
    int res = s.search3(nums, 10);

    if(res == 1){
        cout << "found" << endl;
    }else{
        cout << "not found" << endl;
    }

    return 0;
}