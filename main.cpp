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
 vector<int> twoSum(vector<int>& numbers, int target) {

     int l=0,r=numbers.size()-1;
     while(l<r){
         if(numbers[l]+numbers[r]==target){
             return {l+1,r+1};
         }
         else if(numbers[l]+numbers[r]>target){
             r--;
         }
         else{
             l++;
         }
     }
     return {};                   
    }
};
int main()
{
    Solution s;
    vector<int> v = {2,7,11,15};
    int target = 9;
    vector<int> ans = s.twoSum(v,target);
    for(auto i:ans)
        cout<<i<<" ";


    return 0;
};