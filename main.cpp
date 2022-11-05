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
    int countDigitOne(int n) {
        int count = 0;
        for (long long i = 1; i <= n; i *= 10) {
            long long divider = i * 10;
            count += (n / divider) * i + min(max(n % divider - i + 1, 0LL), i);
        }
        return count;
    }
};

int main()
{

    Solution s;
    cout << s.countDigitOne(13) << endl;

    return 0;
}