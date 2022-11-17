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
    void moveZeroes(vector<int> &nums)
    {
        int c = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                c++;
            }
            else
            {
                int temp = nums[i];
                nums[i] = nums[i - c];
                nums[i - c] = temp;

            }
        }
    }
};
int main()
{
    Solution s;
    // vector<int> v = {0,0,1};
    vector<int> v = {0,1,0,3,12};

    s.moveZeroes(v);

    for (auto x : v)
    {
        cout << x << " ";
    }

    return 0;
}