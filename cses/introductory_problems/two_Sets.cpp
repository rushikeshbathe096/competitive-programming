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

    int sum = n * (n + 1) / 2;

    if (sum % 2 != 0) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    int target = sum / 2;
    st a, b;

    for (int i = n; i >= 1; i--) {
        if (i <= target) {
            a.insert(i);
            target -= i;
        } else {
            b.insert(i);
        }
    }

    cout << a.size() << endl;
    for (auto x : a) cout << x << " ";
    cout << endl;

    cout << b.size() << endl;
    for (auto x : b) cout << x << " ";
    cout << endl;
}

int32_t main() {
    fastio;

    int t = 1;
    while (t--) solve();

    return 0;
}