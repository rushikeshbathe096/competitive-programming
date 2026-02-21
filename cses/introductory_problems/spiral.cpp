/*
Problem: Number Spiral

Description:
Given coordinates (x, y) in an infinite number spiral, print the number at that position. 
The spiral starts with 1 at (1,1) and fills layers in a square pattern.

Input:
- t : number of test cases
- For each test case:
    - x, y : integers representing coordinates (1-indexed)

Output:
- For each test case, print the number at position (x, y).

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
    long long x, y;
    cin >> x >> y;

    long long k = max(x, y);

    if (k & 1) {
        cout << (y > x ? (k * k - (x - 1)):((k - 1) * (k - 1) + y)) << endl;
    } 
    else {
        cout << (x > y ? (k * k - (y - 1)):((k - 1) * (k - 1) + x)) << endl;
    }
}

int32_t main() {
    fastio;

    int t = 1;
    //cin >> t;
    while (t--) solve();

    return 0;
}