#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define maxe *max_element
#define mine *min_element
#define mem(a, b) memset(a, b, sizeof(a))
#define all(a) (a).begin(), (a).end()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) * ((b) / gcd(a, b)))
#define point(a) fixed << setprecision(a)
#define uniq(a)   \
    sort(all(a)); \
    (a).erase(unique((a).begin(), (a).end()), (a).end())
#define tc       \
    int test;    \
    cin >> test; \
    while (test--)
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        if(nums.size() ==  1) return 0;
        if(nums[0] >= nums[1]) return 0;
        
        cout << "nums.size() = " << nums.size() << endl;
        for(auto i = 0; i < nums.size()-1; i++){
            if((i!= 1 && nums[i] > nums[i-1]) && nums[i] > nums[i+1]) return i;
        }

        return nums.size()-1;
        
    }
};
int main()
{
    Solution s;
    vector<int> v = {1};
    // vector<int> v = {1, 2, 3, 1};
    // vector<int> v = {1,2,1,3,5,6,4};
    cout << s.findPeakElement(v) << endl;


    return 0;
}