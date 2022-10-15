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
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n-1;
        int ans = 0;
        while(i < j){
            int h = min(height[i], height[j]);
            int w = j-i;
            ans = max(ans, h*w);
            if(height[i] < height[j]) i++;
            else j--;
        }
        return ans;
        
    }
};

int main()
{
    Solution s;
    vector<int> v= {1,8,6,2,5,4,8,3,7};
    cout<<s.maxArea(v);


    return 0;
};