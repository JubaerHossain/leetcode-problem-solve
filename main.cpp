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
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        // int n = matrix.size();
        // using stl
        // while(n--){
        //     if(binary_search(matrix[n].begin(),matrix[n].end(),target))
        //         return true;
        // }

        // int m = matrix[0].size();
        // int i = 0; int j = m-1;
        // while(i < n && j >= 0){
        //     cout << matrix[i][j] << endl;
        //     if(matrix[i][j] == target){
        //         return true;
        //     }
        //     else if(matrix[i][j] > target){
        //         j--;
        //     }
        //     else{
        //         i++;
        //     }
        // }
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0;
        int high = (n * m) - 1;
        while (low <= high)
        {
            cout << low << " " << high << endl;
            int mid = low + (high - low) / 2;
            if (matrix[mid / m][mid % m] == target)
                return true;
            if (matrix[mid / m][mid % m] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }
};

int main()
{
    Solution s;
    // vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    vector<vector<int>> matrix = {{1}, {3}};
    int target = 3;
    cout << s.searchMatrix(matrix, target) << endl;

    return 0;
}