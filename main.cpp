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
#define sz(a) (int)(a).size()
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
#define point(a) fixed<<setprecision(a)
#define uniq(a) sort(all(a)); (a).erase(unique((a).begin(),(a).end()),(a).end())
#define tc int test; cin>>test; while(test--)
using namespace std; 



class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l = 1, r = 1e9;
        while(l < r) {
            int mid = l + (r - l) / 2;
            int time =  0;
            for(int i = 0; i < n; i++) {
                time += (piles[i] + mid - 1) / mid;
            }
            if(time > h) {
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
    Solution s;
    // vector<int> piles = {3,6,7,11};
    vector<int> piles = {30,11,23,4,20};
    // int h = 8;
    int h = 5;
    cout<<s.minEatingSpeed(piles,h)<<endl;
        
    return 0;
}