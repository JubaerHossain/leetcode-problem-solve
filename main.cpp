#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(auto i = nums.begin(); i != nums.end(); i++){
            auto j = find(i+1, nums.end(), target - *i);
            if(j != nums.end()){
                result.push_back(i - nums.begin());
                result.push_back(j - nums.begin());
                break;
            }
        }
        return result;
        
    }
};


int main(int argc, char const *argv[])
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution s;
    vector<int> result = s.twoSum(nums, target);
     for(auto k = result.begin(); k != result.end(); k++)
         cout << *k << endl;
    return 0;
}