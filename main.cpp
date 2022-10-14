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
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i = 0;i<nums.size();i++){
            cout << (target-nums[i]) << endl;
            if(m.find(target-nums[i])!=m.end()){
                // cout << nums[i] << "->" << target-nums[i] << endl;
                cout << m[target-nums[i]] << "->" << i << endl;
                ans.push_back(m[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            m[nums[i]] = i;
        }
        return ans;
        
    }
};

int main()
{
    
    Solution s;
    vector<int> v = {2,1,7,11,15};
    int target = 9;
    vector<int> ans = s.twoSum(v,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}