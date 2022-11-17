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

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> temp;
        int nn = nums.size();
        int n;
        n = k % nums.size();
        
        for (int i = n - k; i < n; i++)
        {
            cout << "i = " << i << " ";
            temp.push_back(nums[i]);
        }
        // for (int i = 0; i < n - k; i++)
        // {
        //     temp.push_back(nums[i]);
        // }
        nums = temp;




    }
};
int main()
{
    Solution s;
    vector<int> v = {-1};

    s.rotate(v,2);

    // for(auto x:v){
    //     cout<<x<<" ";
    // }

    return 0;
}