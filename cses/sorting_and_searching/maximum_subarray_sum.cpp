#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

#define int long long
#define ll long long
#define ld long double

#define pb push_back
#define ff first
#define ss second

#define endl '\n'

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())

typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

typedef set<int> st;
typedef unordered_set<int> ust;

typedef map<int,int> mp;
typedef unordered_map<int,int> ump;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX;

int binexp(int a, int b){
    a %= MOD;
    int ans = 1;

    while(b){
        if(b & 1)
            ans = (ans * a) % MOD;

        a = (a * a) % MOD;
        b >>= 1;
    }

    return ans;
}

bool isPrime(int n){
    if(n < 2) return false;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }

    return true;
}

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int sum=0,maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=a[i];
        maxsum=max(maxsum,sum);
        if(sum<0)sum=0;
    }
    cout<<maxsum<<endl;
}

int32_t main(){
    fastio;

    int t = 1;
    // cin >> t;

    while(t--)
        solve();

    return 0;
}