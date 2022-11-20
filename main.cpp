#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define maxe *max_element
#define mine *min_element
#define mem(a, b) memset(a, b, sizeof(a))
#define all(a) (a).begin(), (a).end()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) * ((b) / gcd(a, b)))
#define point(a) fixed << setprecision(a)
#define uniq(a)   \
    sort(all(a)); \
    (a).erase(unique((a).begin(), (a).end()), (a).end())
#define tc       \
    int test;    \
    cin >> test; \
    while (test--)
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // int low = 0, high = nums.size() -1;

        // while(low <= high){
        //     int mid = low + (high -low )/ 2;
        //     if(nums[mid] == target) return mid;
        //     if(nums[low] <= nums[mid]){
        //         if(nums[low] <= target && nums[mid] >= target){
        //             high = mid-1;
        //         }else{
        //             low = mid +1;
        //         }
        //     }else{
        //         if(nums[high] >= target && nums[mid] <= target){                   
        //              low = mid +1;
        //         }else{
        //              high = mid-1;
        //         }

        //     }
        // }
        // return -1;


        int low =0, high = nums.size() - 1;

        while(low <= high){
            int mid = low + (high - low) / 2;
            
            if(nums[mid] == target) return true;
            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                low++;
                high--;
            }
            else if(nums[low] <= nums[mid]){
                if(nums[low] <= target && target <= nums[mid]){
                    high = mid -1;
                }else{
                    low = mid +1;
                }
            }else{
                if(nums[high] >= target && target >= nums[mid]){
                    low = mid + 1;
                }else{
                    high = mid -1;
                }
            }
        }
        return false;
    }
};
int main()
{
    Solution s;
    vector<int> v = {2,5,6,0,0,1,2};
    // vector<int> v = {1,0,1,1,1};
    // vector<int> v = {4,5,6,7,0,1,2};
    cout << s.search(v, 3) << endl;


    return 0;
}