#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
typedef long long ll;
#define pb push_back
#define mp make_pair
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
        vector<long long> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
 
        vector<long long> a;
        a.push_back(b[0]);
 
        for (int i = 1; i < n; i++) {
            if (b[i - 1] <= b[i]) {
                a.push_back(b[i]);
            } else {
                a.push_back(1);   // force a drop
                a.push_back(b[i]);
            }
        }
 
        cout << a.size() << "\n";
        for (long long x : a) {
            cout << x << " ";
        }
        cout << "\n";
}

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}