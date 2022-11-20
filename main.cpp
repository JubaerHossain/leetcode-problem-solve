#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define maxe *max_element
#define mine *min_element
#define mem(a,b) memset(a,b,sizeof(a))
#define all(a) (a).begin(),(a).end()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
#define point(a) fixed<<setprecision(a)
#define uniq(a) sort(all(a)); (a).erase(unique((a).begin(),(a).end()),(a).end())
#define tc int test; cin>>test; while(test--)
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n-1;
        while(low < high){
            int mid = low + (high-low)/2;
            if(mid%2 == 0){
                if(nums[mid] == nums[mid+1]) low = mid+2;
                else high = mid;
            }
            else{
                if(nums[mid] == nums[mid-1]) low = mid+1;
                else high = mid-1;
            }
        }
        return nums[low];
        
    }
};

int main()
{
    Solution s;

    // vector<int> nums = {1,1,1,3,3,4,4,6,8,8};
    vector<int> nums = {3,3,7,7,10,11,11};
    cout<<s.singleNonDuplicate(nums)<<endl;
    
    return 0;
}