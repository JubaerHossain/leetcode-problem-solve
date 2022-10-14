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
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        int left = 1;
        for(int i=0;i<n;i++){
            ans[i] = left;
            left *= nums[i];
        }
        int right = 1;
        for(int i=n-1;i>=0;i--){
            ans[i] *= right;
            right *= nums[i];
        }
        return ans;

        
    }
};
int main()
{
    Solution s;
    vector<int> v= {1,2,3,4};
    vector<int> ans = s.productExceptSelf(v);

    for(auto i:ans)
        cout<<i<<" ";


    return 0;
}