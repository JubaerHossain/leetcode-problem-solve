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

int recursion(int n)
{
    if (n == 1)
    {
        return n;
    }
    else
    {
        return recursion(n - 1);
    }
}

class Solution
{
public:
    int fib(int n)
    {
        if (n == 1)
        {
            return n;
        }
        else
        {
            return fib(n - 1);
        }
    }
};

int main()
{

    Solution s;

    cout << s.fib(2) << endl;

    return 0;
}