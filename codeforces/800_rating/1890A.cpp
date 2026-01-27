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
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int x = a[0], y = -1, cnt_x = 0, cnt_y = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == x) cnt_x++;
        else if(y == -1) { 
            y = a[i]; 
            cnt_y = 1; 
        }
        else if(a[i] == y) cnt_y++;
        else { 
            cout << "No" << endl;
            return; }
    }

    if(y == -1) {
        cout << "Yes" << endl;
    } 
    else {
        if(n % 2 == 0) {
            if(cnt_x == cnt_y) cout << "Yes" << endl;
            else cout << "No" << endl;
        } else {
            if(abs(cnt_x - cnt_y) == 1) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
}

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}