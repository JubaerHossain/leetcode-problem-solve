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
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v(nums1.size()+nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),v.begin());
        if(v.size()%2==0){
            return (v[v.size()/2]+v[(v.size()/2)-1])/2.0;
        }
        else{
            return v[v.size()/2];
        }
        
    }
};

int main()
{
    Solution s1;
    vector<int> nums1 = {1,3};
    vector<int> nums2 = {2};
    cout<<s1.findMedianSortedArrays(nums1,nums2)<<endl;

    
    return 0;
}