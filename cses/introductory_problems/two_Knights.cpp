/*
Problem: Two Knights

Description:
Given an integer n, for each k = 1, 2, ..., n, count the number of ways to place two knights on a k x k chessboard such that they do not attack each other.
Knights attack in an "L" shape: two squares in one direction and one square perpendicular.

Input:
- n : a single integer (1 ≤ n ≤ 10000)

Output:
- Print n integers, each representing the number of valid placements for k = 1 to n.

Example:
Input:
8
Output:
0
6
28
96
252
550
1056
1848

Approach / Notes:
- Total ways to place 2 knights on k x k board: k*k * (k*k - 1) / 2
- Subtract placements where knights attack each other: 4 * (k-1)*(k-1)
- Iterate k = 1 to n and compute for each.
*/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
typedef long long ll;
#define pb push_back
#define all(v) v.begin(), v.end()

typedef vector<int> vi;
typedef set<int> st;
typedef unordered_set<int> ust;
typedef map<int,int> mp;
typedef unordered_map<int,int> ump;
typedef pair<int,int> p;

void solve() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int total = i * i * (i * i - 1) / 2;
        int attacking = 4 * (i - 1) * (i - 2);
        cout << total - attacking << endl;
    }
}

int32_t main() {
    fastio;

    int t = 1;
    //cin >> t;
    while (t--) solve();

    return 0;
}