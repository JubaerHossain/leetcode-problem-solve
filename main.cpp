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
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n; i++){
            cout << nums[i] << " ";
            cout << endl;
            cout <<" nums[(i+1)%n] " << nums[(i+1)%n] << endl;
            if(nums[i] > nums[(i+1)%n]) count++;
        }
        return count <= 1;
    }
};

int main()
{
    Solution s;
    vector<int> v = {3,4,5,1,2};
    cout<<s.check(v)<<endl;
    
    return 0;
}