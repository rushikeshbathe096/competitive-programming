/*
Problem: Ambitious Kid
Time Limit: 1s
Memory Limit: 256MB

Description:
Given an array of integers A1, A2, ..., AN, you can increase or decrease any element by 1 any number of times. Find the minimum number of operations to make the product A1*A2*...*AN = 0.

Approach:
even if any one element is zero result will be zero thus we find the mi abs value of element in an array
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
    vi a(n);
    int ans=LLONG_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
        ans=min(ans,llabs(a[i]));
    }
    cout<<ans<<endl;
}

int32_t main() {
    fastio;

    int t = 1;
    //cin >> t;
    while (t--) solve();

    return 0;
}