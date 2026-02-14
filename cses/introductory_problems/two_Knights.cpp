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