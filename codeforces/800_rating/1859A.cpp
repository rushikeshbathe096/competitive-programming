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
    cin>>n;
    vi a(n);
    int mini=LLONG_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];  
        mini=min(mini,a[i]);
    }
    vi b;
    for(int i=0;i<n;i++){
        if(a[i]==mini){
            b.pb(a[i]);
        }
        else{
            c.pb(a[i]);
        }
    }
    int lb=b.size();
    int lc=c.size();
    if(lc==0){
        cout<<-1<<endl;
        return;
    }
    cout<<lb<<" "<<lc<<endl;
    for(int i=0;i<lb;i++){
        cout<<b[i]<<" ";    
    }
    cout<<endl;
    for(int i=0;i<lc;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

}

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}