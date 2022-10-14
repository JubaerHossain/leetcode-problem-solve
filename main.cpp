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
        vector<int> ans;
        int n = nums.size();
        int left[n], right[n];
        left[0] = 1;
        right[n-1] = 1;
        for(int i=1; i<n; i++){
            left[i] = left[i-1]*nums[i-1];
        }
        for(int i=n-2; i>=0; i--){
            right[i] = right[i+1]*nums[i+1];
        }
        for(int i=0; i<n; i++){
            ans.push_back(left[i]*right[i]);
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