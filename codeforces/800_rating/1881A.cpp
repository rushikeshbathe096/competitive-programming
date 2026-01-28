/*
Problem: Doremy Append String

Description:
Given strings x and s, repeatedly append the current value of x to the end of x. Determine the minimum number of operations needed until s appears as a substring of x. If impossible, output -1.

Input Format:
- The first line contains an integer t — the number of test cases.
- For each test case:
    - The first line contains two integers n and m — lengths of strings x and s.
    - The second line contains the string x of length n.
    - The third line contains the string s of length m.

Output Format:
For each test case, print the minimum number of operations after which s appears in x, or -1 if impossible.

Approach:
Check if s is already a substring of x (0 operations). Otherwise, iterate up to 5 times (max possible operation needed since n*m ≤ 25), appending x to itself each time, and check if s appears. Output the first operation count when it does.
*/
#include <bits/stdc++.h>
 
using namespace std;
 
#define fastio ios::sync_with_stdio(false);cin.tie(nullptr)
#define endl '\n'
#define int long long
typedef long long ll;
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
 
typedef vector < int > vi;
typedef set < int > st;
typedef unordered_set < int > ust;
typedef map < int, int > mp;
typedef unordered_map < int, int > ump;
typedef pair < int, int > p;
 
void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    int ans = -1;
    bool flag = false;
    if (x.find(s) != string::npos) {
        ans = 0;
    }
    else {
        for (int i = 1; i <= 5; i++) {
            x += x;
            if (x.find(s) != string::npos) {
                ans = i;
                flag = true;
                break;
            }
        }
    }
    cout << ans << endl;
}
 
 
int32_t main() {
    fastio;
 
    int t = 1;
    cin >> t;
    while (t--) solve();
 
    return 0;
}
