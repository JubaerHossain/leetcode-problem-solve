#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                char t = st.top(); st.pop();
                if (c == ')' && t != '(') return false;
                if (c == ']' && t != '[') return false;
                if (c == '}' && t != '{') return false;
            }
        }
        return st.empty();
        
    }
};

int main()
{
    Solution s;
    string str = "()";
    cout << s.isValid(str) << endl;

    
    return 0;
}