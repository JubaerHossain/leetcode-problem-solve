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
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int max = *max_element(weights.begin(), weights.end());
        int sum = accumulate(weights.begin(), weights.end(), 0);
        int low = max;
        int high = sum;
        int ans = 0;
        while(low<=high){
            int mid = (low+high)/2;
            int count = 1;
            int temp = 0;
            for(int i=0;i<n;i++){
                if(temp+weights[i]<=mid){
                    temp += weights[i];
                }
                else{
                    count++;
                    temp = weights[i];
                }
            }
            if(count<=days){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
        
    }
};

int main()
{
    Solution solution;
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    cout<<solution.shipWithinDays(weights, days)<<endl;
    
    return 0;
}