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
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1, r = 1e6;
        while(l < r) {
            int mid = (l + r) / 2;
            int sum = 0;
            for(int i = 0; i < nums.size(); i++) {
                sum += (nums[i] + mid - 1) / mid;
            }
            if(sum > threshold) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        return l;
        
        
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1,2,5,9};
    int threshold = 6;
    cout<<solution.smallestDivisor(nums, threshold)<<endl;

    
    return 0;
}