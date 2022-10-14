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
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for (auto i = 0; i < nums.size(); i++) {
            if (st.find(nums[i]) != st.end()) {
                return true;
            }
            st.insert(nums[i]);
        }        
        return false;

        
    }
}; 

int main()
{
    vector<int> nums = {1,2,3,4};
    Solution s;
    cout<<s.containsDuplicate(nums)<<endl;

    
    return 0;
}