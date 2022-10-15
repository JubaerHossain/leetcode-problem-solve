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
 bool isPalindrome(string s) {
    int i=0,j=s.size()-1;
    while(i<j){
        if(!isalnum(s[i])) i++;
        else if(!isalnum(s[j])) j--;
        else if(tolower(s[i++])!=tolower(s[j--])) return false;
    }
    return true;
};
};
int main()
{
    Solution s;
    string str = "A man, a plan, a canal: Panama";
    cout<<s.isPalindrome(str)<<endl;


    return 0;
};