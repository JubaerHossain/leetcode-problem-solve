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
    bool isPalindrome(int x) {
        int temp = x;
        int rev = 0;
        while(temp > 0){
            int rem = temp % 10;
            if(rev > INT_MAX / 10 || (rev == INT_MAX / 10 && rem > 7)) return 0;
            if(rev < INT_MIN / 10 || (rev == INT_MIN / 10 && rem < -8)) return 0;
            rev = rev * 10 + rem;
            temp /= 10;
        }

        if(rev == x) {
            return 1;
        }else{
            return 0;
        }
        
    }
};


int main()
{

    Solution s;
    cout << s.isPalindrome(1234567899) << endl;

    return 0;
}